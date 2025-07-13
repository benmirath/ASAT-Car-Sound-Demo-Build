/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Audiokinetic Wwise generated include file. Do not edit.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __WWISE_IDS_H__
#define __WWISE_IDS_H__

#include <AK/SoundEngine/Common/AkTypes.h>

namespace AK
{
    namespace EVENTS
    {
        static const AkUniqueID ALERT_CAR_NOT_LOCKED_PLAYER = 414561147U;
        static const AkUniqueID AMBIS_TRIGGER = 1932200850U;
        static const AkUniqueID DOOR_CLOSE_PLAYER = 3750746236U;
        static const AkUniqueID DOOR_OPEN_PLAYER = 2188220696U;
        static const AkUniqueID FOOTSTEP_PLAYER = 648916573U;
        static const AkUniqueID IGNITION_ON_PLAYER = 2238133888U;
        static const AkUniqueID LOCK_CAR_PLAYER = 2318215265U;
        static const AkUniqueID STOP_LOOP = 1640874226U;
        static const AkUniqueID UNLOCK_CAR_PLAYER = 4262450206U;
        static const AkUniqueID WALK_TO_CAR_PLAYER = 1183084879U;
        static const AkUniqueID WEIGHT_ON_SEAT_PLAYER = 3924585891U;
    } // namespace EVENTS

    namespace STATES
    {
        namespace AMBIS_SWITCHER
        {
            static const AkUniqueID GROUP = 989869371U;

            namespace STATE
            {
                static const AkUniqueID EXT = 898834102U;
                static const AkUniqueID INT = 529034928U;
                static const AkUniqueID NONE = 748895195U;
            } // namespace STATE
        } // namespace AMBIS_SWITCHER

        namespace CAR_PROXIMITY
        {
            static const AkUniqueID GROUP = 640051931U;

            namespace STATE
            {
                static const AkUniqueID CLOSE = 1451272583U;
                static const AkUniqueID FAR = 1183803292U;
                static const AkUniqueID NONE = 748895195U;
            } // namespace STATE
        } // namespace CAR_PROXIMITY

    } // namespace STATES

    namespace GAME_PARAMETERS
    {
        static const AkUniqueID DISTANCE = 1240670792U;
        static const AkUniqueID PROXIMITY = 1790102840U;
    } // namespace GAME_PARAMETERS

    namespace BANKS
    {
        static const AkUniqueID INIT = 1355168291U;
        static const AkUniqueID AMBIS = 2900650119U;
        static const AkUniqueID MAIN = 3161908922U;
    } // namespace BANKS

    namespace BUSSES
    {
        static const AkUniqueID AMBIS = 2900650119U;
        static const AkUniqueID MASTER_AUDIO_BUS = 3803692087U;
    } // namespace BUSSES

    namespace AUDIO_DEVICES
    {
        static const AkUniqueID NO_OUTPUT = 2317455096U;
        static const AkUniqueID SYSTEM = 3859886410U;
    } // namespace AUDIO_DEVICES

}// namespace AK

#endif // __WWISE_IDS_H__
