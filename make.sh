#!/usr/bin/bash

VERSION=$(cat VERSION)

## PATCHING
# ./patches/protonprep-valve-staging.sh 2>&1 | tee patchlog.txt

## BUILDING
rm -rf build
mkdir build && cd build || exit 2
../configure.sh --enable-ccache --build-name="$VERSION" --container-engine=podman
make redist  2>&1 | tee log

## INSTALLING
if [ -f "$VERSION.tar.gz" ]; then
    echo "Build successful. Installing"
    target="$HOME/.local/share/Steam/compatibilitytools.d"
    rm -rf "${target:?}/$VERSION"
    tar -xzf "$VERSION.tar.gz" -C "$target"
    cp ../user_settings.sample.py "$target/$VERSION/user_settings.py"
    echo Done
fi