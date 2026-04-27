#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/FloatProvider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834FC0
   RuntimeId:        0286
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10D6
   VfTable:          00000001421EC730
   Address (Base):   000000014311A7F0
*/
#pragma pack(push, 8)
class FloatProvider_If : public FloatProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class FloatProvider) IfTrue; /* 0x0010 */
  FB_HANDLE(class FloatProvider) IfFalse; /* 0x0018 */
  FB_HANDLE(class BoolProvider) Condition; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(FloatProvider_If) == 40);

}
