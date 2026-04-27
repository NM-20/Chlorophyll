#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/GameShared/PersistentValueTemplateData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849E78
   RuntimeId:        0E1E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          114D
   VfTable:          000000014225F688
   Address (Base):   00000001431142B0
*/
#pragma pack(push, 8)
class PersistentValueTemplate : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  PersistentValueTemplateData Data; /* 0x0010 */
  FB_REFARRAY(class AbstractPersistentStatRef) DerivedFormulaRefs; /* 0x0040 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(PersistentValueTemplate) == 72);

}
