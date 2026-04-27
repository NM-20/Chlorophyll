#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/TransformProvider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835200
   RuntimeId:        02AA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1095
   VfTable:          00000001421EC598
   Address (Base):   000000014311A190
*/
#pragma pack(push, 8)
class TransformProvider_Mix : public TransformProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class TransformProvider) Rotation; /* 0x0010 */
  FB_HANDLE(class TransformProvider) Translation; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(TransformProvider_Mix) == 32);

}
