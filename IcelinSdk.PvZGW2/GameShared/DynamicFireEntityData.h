#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentEntityData.h>
#include <IcelinSdk.PvZGW2/Entity/MaterialDecl.h>
#include <IcelinSdk.PvZGW2/Render/SurfaceShaderInstanceDataStruct.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A780
   RuntimeId:        0EA6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B0D
   VfTable:          0000000142265188
   Address (Base):   00000001430D74B0
*/
#pragma pack(push, 16)
class DynamicFireEntityData : public GameComponentEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Width; /* 0x0080 */
  FB_FLOAT32 Length; /* 0x0084 */
  FB_FLOAT32 Height; /* 0x0088 */
  FB_FLOAT32 FireTileSize; /* 0x008C */
  FB_FLOAT32 MaxBurnTime; /* 0x0090 */
  FB_FLOAT32 MaxHealth; /* 0x0094 */
  FB_FLOAT32 DamagePerSecond; /* 0x0098 */
  char pad_009C[0x0004];
  FB_HANDLE(class DynamicFireCellFXAsset) CellFXAsset; /* 0x00A0 */
  FB_UINT32 FireCellDamageRadius; /* 0x00A8 */
  FB_FLOAT32 FireCellDamagePerSecond; /* 0x00AC */
  FB_UINT32 MaxDamagingCells; /* 0x00B0 */
  FB_FLOAT32 StartDamageThreshold; /* 0x00B4 */
  FB_FLOAT32 EndDamageThreshold; /* 0x00B8 */
  FB_UINT32 MaxFireStarters; /* 0x00BC */
  FB_FLOAT32 MinFireStarterRadius; /* 0x00C0 */
  FB_UINT32 MaxFiresPerFrame; /* 0x00C4 */
  FB_UINT32 MaxBurningCells; /* 0x00C8 */
  FB_UINT32 QuadrantCellSize; /* 0x00CC */
  MaterialDecl MaterialPair; /* 0x00D0 */
  char pad_00D4[0x0004];
  SurfaceShaderInstanceDataStruct MaskShader; /* 0x00D8 */
  FB_UINT32 MaxQuadrantSounds; /* 0x0100 */
  FB_UINT32 LargeFireThreshold; /* 0x0104 */
  FB_FLOAT32 LargeFireSortFactor; /* 0x0108 */
  char pad_010C[0x0004];
  FB_HANDLE(class SoundAsset) LargeFireSound; /* 0x0110 */
  FB_UINT32 MediumFireThreshold; /* 0x0118 */
  FB_FLOAT32 MediumFireSortFactor; /* 0x011C */
  FB_HANDLE(class SoundAsset) MediumFireSound; /* 0x0120 */
  FB_HANDLE(class SoundAsset) SmallFireSound; /* 0x0128 */
  FB_FLOAT32 MediumInThreshold; /* 0x0130 */
  FB_FLOAT32 LargeInThreshold; /* 0x0134 */
  FB_FLOAT32 LargeOutThreshold; /* 0x0138 */
  FB_FLOAT32 MediumOutThreshold; /* 0x013C */
  FB_FLOAT32 SmallFireWeight; /* 0x0140 */
  FB_FLOAT32 MediumFireWeight; /* 0x0144 */
  FB_FLOAT32 LargeFireWeight; /* 0x0148 */
  char pad_014C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0150 */
#pragma pack(pop)

static_assert(sizeof(DynamicFireEntityData) == 336);

}
