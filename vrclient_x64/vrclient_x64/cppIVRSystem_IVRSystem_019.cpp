#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.4.18/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRSystem_IVRSystem_019.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVRSystem_IVRSystem_019_GetRecommendedRenderTargetSize( struct cppIVRSystem_IVRSystem_019_GetRecommendedRenderTargetSize_params *params )
{
    ((IVRSystem*)params->linux_side)->GetRecommendedRenderTargetSize((uint32_t *)params->pnWidth, (uint32_t *)params->pnHeight);
}

void cppIVRSystem_IVRSystem_019_GetProjectionMatrix( struct cppIVRSystem_IVRSystem_019_GetProjectionMatrix_params *params )
{
    *params->_ret = ((IVRSystem*)params->linux_side)->GetProjectionMatrix((vr::EVREye)params->eEye, (float)params->fNearZ, (float)params->fFarZ);
}

void cppIVRSystem_IVRSystem_019_GetProjectionRaw( struct cppIVRSystem_IVRSystem_019_GetProjectionRaw_params *params )
{
    ((IVRSystem*)params->linux_side)->GetProjectionRaw((vr::EVREye)params->eEye, (float *)params->pfLeft, (float *)params->pfRight, (float *)params->pfTop, (float *)params->pfBottom);
}

void cppIVRSystem_IVRSystem_019_ComputeDistortion( struct cppIVRSystem_IVRSystem_019_ComputeDistortion_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->ComputeDistortion((vr::EVREye)params->eEye, (float)params->fU, (float)params->fV, (vr::DistortionCoordinates_t *)params->pDistortionCoordinates);
}

void cppIVRSystem_IVRSystem_019_GetEyeToHeadTransform( struct cppIVRSystem_IVRSystem_019_GetEyeToHeadTransform_params *params )
{
    *params->_ret = ((IVRSystem*)params->linux_side)->GetEyeToHeadTransform((vr::EVREye)params->eEye);
}

void cppIVRSystem_IVRSystem_019_GetTimeSinceLastVsync( struct cppIVRSystem_IVRSystem_019_GetTimeSinceLastVsync_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetTimeSinceLastVsync((float *)params->pfSecondsSinceLastVsync, (uint64_t *)params->pulFrameCounter);
}

void cppIVRSystem_IVRSystem_019_GetD3D9AdapterIndex( struct cppIVRSystem_IVRSystem_019_GetD3D9AdapterIndex_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetD3D9AdapterIndex();
}

void cppIVRSystem_IVRSystem_019_GetDXGIOutputInfo( struct cppIVRSystem_IVRSystem_019_GetDXGIOutputInfo_params *params )
{
    ((IVRSystem*)params->linux_side)->GetDXGIOutputInfo((int32_t *)params->pnAdapterIndex);
}

void cppIVRSystem_IVRSystem_019_GetOutputDevice( struct cppIVRSystem_IVRSystem_019_GetOutputDevice_params *params )
{
    ((IVRSystem*)params->linux_side)->GetOutputDevice((uint64_t *)params->pnDevice, (vr::ETextureType)params->textureType, (VkInstance_T *)params->pInstance);
}

void cppIVRSystem_IVRSystem_019_IsDisplayOnDesktop( struct cppIVRSystem_IVRSystem_019_IsDisplayOnDesktop_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->IsDisplayOnDesktop();
}

void cppIVRSystem_IVRSystem_019_SetDisplayVisibility( struct cppIVRSystem_IVRSystem_019_SetDisplayVisibility_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->SetDisplayVisibility((bool)params->bIsVisibleOnDesktop);
}

void cppIVRSystem_IVRSystem_019_GetDeviceToAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_019_GetDeviceToAbsoluteTrackingPose_params *params )
{
    ((IVRSystem*)params->linux_side)->GetDeviceToAbsoluteTrackingPose((vr::ETrackingUniverseOrigin)params->eOrigin, (float)params->fPredictedSecondsToPhotonsFromNow, (vr::TrackedDevicePose_t *)params->pTrackedDevicePoseArray, (uint32_t)params->unTrackedDevicePoseArrayCount);
}

void cppIVRSystem_IVRSystem_019_ResetSeatedZeroPose( struct cppIVRSystem_IVRSystem_019_ResetSeatedZeroPose_params *params )
{
    ((IVRSystem*)params->linux_side)->ResetSeatedZeroPose();
}

void cppIVRSystem_IVRSystem_019_GetSeatedZeroPoseToStandingAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_019_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params *params )
{
    *params->_ret = ((IVRSystem*)params->linux_side)->GetSeatedZeroPoseToStandingAbsoluteTrackingPose();
}

void cppIVRSystem_IVRSystem_019_GetRawZeroPoseToStandingAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_019_GetRawZeroPoseToStandingAbsoluteTrackingPose_params *params )
{
    *params->_ret = ((IVRSystem*)params->linux_side)->GetRawZeroPoseToStandingAbsoluteTrackingPose();
}

void cppIVRSystem_IVRSystem_019_GetSortedTrackedDeviceIndicesOfClass( struct cppIVRSystem_IVRSystem_019_GetSortedTrackedDeviceIndicesOfClass_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetSortedTrackedDeviceIndicesOfClass((vr::ETrackedDeviceClass)params->eTrackedDeviceClass, (vr::TrackedDeviceIndex_t *)params->punTrackedDeviceIndexArray, (uint32_t)params->unTrackedDeviceIndexArrayCount, (vr::TrackedDeviceIndex_t)params->unRelativeToTrackedDeviceIndex);
}

void cppIVRSystem_IVRSystem_019_GetTrackedDeviceActivityLevel( struct cppIVRSystem_IVRSystem_019_GetTrackedDeviceActivityLevel_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetTrackedDeviceActivityLevel((vr::TrackedDeviceIndex_t)params->unDeviceId);
}

void cppIVRSystem_IVRSystem_019_ApplyTransform( struct cppIVRSystem_IVRSystem_019_ApplyTransform_params *params )
{
    ((IVRSystem*)params->linux_side)->ApplyTransform((vr::TrackedDevicePose_t *)params->pOutputPose, (const vr::TrackedDevicePose_t *)params->pTrackedDevicePose, (const vr::HmdMatrix34_t *)params->pTransform);
}

void cppIVRSystem_IVRSystem_019_GetTrackedDeviceIndexForControllerRole( struct cppIVRSystem_IVRSystem_019_GetTrackedDeviceIndexForControllerRole_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetTrackedDeviceIndexForControllerRole((vr::ETrackedControllerRole)params->unDeviceType);
}

void cppIVRSystem_IVRSystem_019_GetControllerRoleForTrackedDeviceIndex( struct cppIVRSystem_IVRSystem_019_GetControllerRoleForTrackedDeviceIndex_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetControllerRoleForTrackedDeviceIndex((vr::TrackedDeviceIndex_t)params->unDeviceIndex);
}

void cppIVRSystem_IVRSystem_019_GetTrackedDeviceClass( struct cppIVRSystem_IVRSystem_019_GetTrackedDeviceClass_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetTrackedDeviceClass((vr::TrackedDeviceIndex_t)params->unDeviceIndex);
}

void cppIVRSystem_IVRSystem_019_IsTrackedDeviceConnected( struct cppIVRSystem_IVRSystem_019_IsTrackedDeviceConnected_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->IsTrackedDeviceConnected((vr::TrackedDeviceIndex_t)params->unDeviceIndex);
}

void cppIVRSystem_IVRSystem_019_GetBoolTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_019_GetBoolTrackedDeviceProperty_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetBoolTrackedDeviceProperty((vr::TrackedDeviceIndex_t)params->unDeviceIndex, (vr::ETrackedDeviceProperty)params->prop, (vr::ETrackedPropertyError *)params->pError);
}

void cppIVRSystem_IVRSystem_019_GetFloatTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_019_GetFloatTrackedDeviceProperty_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetFloatTrackedDeviceProperty((vr::TrackedDeviceIndex_t)params->unDeviceIndex, (vr::ETrackedDeviceProperty)params->prop, (vr::ETrackedPropertyError *)params->pError);
}

void cppIVRSystem_IVRSystem_019_GetInt32TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_019_GetInt32TrackedDeviceProperty_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetInt32TrackedDeviceProperty((vr::TrackedDeviceIndex_t)params->unDeviceIndex, (vr::ETrackedDeviceProperty)params->prop, (vr::ETrackedPropertyError *)params->pError);
}

void cppIVRSystem_IVRSystem_019_GetUint64TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_019_GetUint64TrackedDeviceProperty_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetUint64TrackedDeviceProperty((vr::TrackedDeviceIndex_t)params->unDeviceIndex, (vr::ETrackedDeviceProperty)params->prop, (vr::ETrackedPropertyError *)params->pError);
}

void cppIVRSystem_IVRSystem_019_GetMatrix34TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_019_GetMatrix34TrackedDeviceProperty_params *params )
{
    *params->_ret = ((IVRSystem*)params->linux_side)->GetMatrix34TrackedDeviceProperty((vr::TrackedDeviceIndex_t)params->unDeviceIndex, (vr::ETrackedDeviceProperty)params->prop, (vr::ETrackedPropertyError *)params->pError);
}

void cppIVRSystem_IVRSystem_019_GetArrayTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_019_GetArrayTrackedDeviceProperty_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetArrayTrackedDeviceProperty((vr::TrackedDeviceIndex_t)params->unDeviceIndex, (vr::ETrackedDeviceProperty)params->prop, (vr::PropertyTypeTag_t)params->propType, (void *)params->pBuffer, (uint32_t)params->unBufferSize, (vr::ETrackedPropertyError *)params->pError);
}

void cppIVRSystem_IVRSystem_019_GetStringTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_019_GetStringTrackedDeviceProperty_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetStringTrackedDeviceProperty((vr::TrackedDeviceIndex_t)params->unDeviceIndex, (vr::ETrackedDeviceProperty)params->prop, (char *)params->pchValue, (uint32_t)params->unBufferSize, (vr::ETrackedPropertyError *)params->pError);
}

void cppIVRSystem_IVRSystem_019_GetPropErrorNameFromEnum( struct cppIVRSystem_IVRSystem_019_GetPropErrorNameFromEnum_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetPropErrorNameFromEnum((vr::ETrackedPropertyError)params->error);
}

void cppIVRSystem_IVRSystem_019_PollNextEvent( struct cppIVRSystem_IVRSystem_019_PollNextEvent_params *params )
{
    VREvent_t lin_pEvent;
    if (params->pEvent)
        struct_VREvent_t_1418_win_to_lin( params->pEvent, &lin_pEvent );
    uint32_t lin_uncbVREvent = params->uncbVREvent ? sizeof(lin_pEvent) : 0;
    params->_ret = ((IVRSystem*)params->linux_side)->PollNextEvent(params->pEvent ? &lin_pEvent : nullptr, lin_uncbVREvent);
    if (params->pEvent)
        struct_VREvent_t_1418_lin_to_win( &lin_pEvent, params->pEvent, params->uncbVREvent );
}

void cppIVRSystem_IVRSystem_019_PollNextEventWithPose( struct cppIVRSystem_IVRSystem_019_PollNextEventWithPose_params *params )
{
    VREvent_t lin_pEvent;
    if (params->pEvent)
        struct_VREvent_t_1418_win_to_lin( params->pEvent, &lin_pEvent );
    uint32_t lin_uncbVREvent = params->uncbVREvent ? sizeof(lin_pEvent) : 0;
    params->_ret = ((IVRSystem*)params->linux_side)->PollNextEventWithPose((vr::ETrackingUniverseOrigin)params->eOrigin, params->pEvent ? &lin_pEvent : nullptr, lin_uncbVREvent, (vr::TrackedDevicePose_t *)params->pTrackedDevicePose);
    if (params->pEvent)
        struct_VREvent_t_1418_lin_to_win( &lin_pEvent, params->pEvent, params->uncbVREvent );
}

void cppIVRSystem_IVRSystem_019_GetEventTypeNameFromEnum( struct cppIVRSystem_IVRSystem_019_GetEventTypeNameFromEnum_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetEventTypeNameFromEnum((vr::EVREventType)params->eType);
}

void cppIVRSystem_IVRSystem_019_GetHiddenAreaMesh( struct cppIVRSystem_IVRSystem_019_GetHiddenAreaMesh_params *params )
{
    *params->_ret = ((IVRSystem*)params->linux_side)->GetHiddenAreaMesh((vr::EVREye)params->eEye, (vr::EHiddenAreaMeshType)params->type);
}

void cppIVRSystem_IVRSystem_019_GetControllerState( struct cppIVRSystem_IVRSystem_019_GetControllerState_params *params )
{
    VRControllerState001_t lin_pControllerState;
    if (params->pControllerState)
        struct_VRControllerState001_t_1418_win_to_lin( params->pControllerState, &lin_pControllerState );
    uint32_t lin_unControllerStateSize = params->unControllerStateSize ? sizeof(lin_pControllerState) : 0;
    params->_ret = ((IVRSystem*)params->linux_side)->GetControllerState((vr::TrackedDeviceIndex_t)params->unControllerDeviceIndex, params->pControllerState ? &lin_pControllerState : nullptr, lin_unControllerStateSize);
    if (params->pControllerState)
        struct_VRControllerState001_t_1418_lin_to_win( &lin_pControllerState, params->pControllerState, params->unControllerStateSize );
}

void cppIVRSystem_IVRSystem_019_GetControllerStateWithPose( struct cppIVRSystem_IVRSystem_019_GetControllerStateWithPose_params *params )
{
    VRControllerState001_t lin_pControllerState;
    if (params->pControllerState)
        struct_VRControllerState001_t_1418_win_to_lin( params->pControllerState, &lin_pControllerState );
    uint32_t lin_unControllerStateSize = params->unControllerStateSize ? sizeof(lin_pControllerState) : 0;
    params->_ret = ((IVRSystem*)params->linux_side)->GetControllerStateWithPose((vr::ETrackingUniverseOrigin)params->eOrigin, (vr::TrackedDeviceIndex_t)params->unControllerDeviceIndex, params->pControllerState ? &lin_pControllerState : nullptr, lin_unControllerStateSize, (vr::TrackedDevicePose_t *)params->pTrackedDevicePose);
    if (params->pControllerState)
        struct_VRControllerState001_t_1418_lin_to_win( &lin_pControllerState, params->pControllerState, params->unControllerStateSize );
}

void cppIVRSystem_IVRSystem_019_TriggerHapticPulse( struct cppIVRSystem_IVRSystem_019_TriggerHapticPulse_params *params )
{
    ((IVRSystem*)params->linux_side)->TriggerHapticPulse((vr::TrackedDeviceIndex_t)params->unControllerDeviceIndex, (uint32_t)params->unAxisId, (unsigned short)params->usDurationMicroSec);
}

void cppIVRSystem_IVRSystem_019_GetButtonIdNameFromEnum( struct cppIVRSystem_IVRSystem_019_GetButtonIdNameFromEnum_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetButtonIdNameFromEnum((vr::EVRButtonId)params->eButtonId);
}

void cppIVRSystem_IVRSystem_019_GetControllerAxisTypeNameFromEnum( struct cppIVRSystem_IVRSystem_019_GetControllerAxisTypeNameFromEnum_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetControllerAxisTypeNameFromEnum((vr::EVRControllerAxisType)params->eAxisType);
}

void cppIVRSystem_IVRSystem_019_IsInputAvailable( struct cppIVRSystem_IVRSystem_019_IsInputAvailable_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->IsInputAvailable();
}

void cppIVRSystem_IVRSystem_019_IsSteamVRDrawingControllers( struct cppIVRSystem_IVRSystem_019_IsSteamVRDrawingControllers_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->IsSteamVRDrawingControllers();
}

void cppIVRSystem_IVRSystem_019_ShouldApplicationPause( struct cppIVRSystem_IVRSystem_019_ShouldApplicationPause_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->ShouldApplicationPause();
}

void cppIVRSystem_IVRSystem_019_ShouldApplicationReduceRenderingWork( struct cppIVRSystem_IVRSystem_019_ShouldApplicationReduceRenderingWork_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->ShouldApplicationReduceRenderingWork();
}

void cppIVRSystem_IVRSystem_019_DriverDebugRequest( struct cppIVRSystem_IVRSystem_019_DriverDebugRequest_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->DriverDebugRequest((vr::TrackedDeviceIndex_t)params->unDeviceIndex, (const char *)params->pchRequest, (char *)params->pchResponseBuffer, (uint32_t)params->unResponseBufferSize);
}

void cppIVRSystem_IVRSystem_019_PerformFirmwareUpdate( struct cppIVRSystem_IVRSystem_019_PerformFirmwareUpdate_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->PerformFirmwareUpdate((vr::TrackedDeviceIndex_t)params->unDeviceIndex);
}

void cppIVRSystem_IVRSystem_019_AcknowledgeQuit_Exiting( struct cppIVRSystem_IVRSystem_019_AcknowledgeQuit_Exiting_params *params )
{
    ((IVRSystem*)params->linux_side)->AcknowledgeQuit_Exiting();
}

void cppIVRSystem_IVRSystem_019_AcknowledgeQuit_UserPrompt( struct cppIVRSystem_IVRSystem_019_AcknowledgeQuit_UserPrompt_params *params )
{
    ((IVRSystem*)params->linux_side)->AcknowledgeQuit_UserPrompt();
}

#ifdef __cplusplus
}
#endif
