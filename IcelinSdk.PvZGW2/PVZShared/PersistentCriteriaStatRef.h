#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/AbstractPersistentStatRef.h>

namespace fb
{

/* TypeInfo (Array): 00000001428688D0
   RuntimeId:        2401
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E79
   VfTable:          000000014234E920
   Address (Base):   0000000143107D10
*/
#pragma pack(push, 8)
class PersistentCriteriaStatRef : public AbstractPersistentStatRef
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class CriteriaData) Criteria; /* 0x0010 */
  FB_HANDLE(class StatsCategoryBaseData) ParamX; /* 0x0018 */
  FB_HANDLE(class StatsCategoryBaseData) ParamY; /* 0x0020 */
  FB_HANDLE(class AwardData) CriteriaOwner; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PersistentCriteriaStatRef) == 48);

}
