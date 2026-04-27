#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D0C0
   RuntimeId:        10D5
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BAE00
   Default Value:    0000000142BF4DA0
*/
#pragma pack(push, 4)
struct VehicleEntryListenerBinding
{
  typedef struct ValueTypeInfo TypeInfo_t;

  AntRef InVehicle; /* 0x0000 */
  AntRef InOpenEntry; /* 0x0014 */
  AntRef VehicleEntryFire; /* 0x0028 */
  AntRef VehicleEntryYaw; /* 0x003C */
  AntRef VehicleEntryRelativeYaw; /* 0x0050 */
  AntRef VehicleEntryPitch; /* 0x0064 */
  AntRef VehicleEntryRoll; /* 0x0078 */
  AntRef VehicleEntryRotation; /* 0x008C */
  AntRef VehicleEntryForceX; /* 0x00A0 */
  AntRef VehicleEntryForceY; /* 0x00B4 */
  AntRef VehicleEntryForceZ; /* 0x00C8 */
  AntRef VehicleEntryIndex; /* 0x00DC */
  AntRef VehicleEntryIndexUpdated; /* 0x00F0 */
  AntRef VehicleOpenEntryIndex; /* 0x0104 */
  AntRef InVehicleRetrigger; /* 0x0118 */
  AntRef VehicleEntryChooserIndex; /* 0x012C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0140 */
#pragma pack(pop)

static_assert(sizeof(VehicleEntryListenerBinding) == 320);

}
