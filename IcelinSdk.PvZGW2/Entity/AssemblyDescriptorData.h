#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/InterfaceDescriptorData.h>

namespace fb
{

/* TypeInfo (Array): 000000014283C4F8
   RuntimeId:        09BC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E10
   VfTable:          00000001422135C0
   Address (Base):   0000000143114CD0
*/
#pragma pack(push, 8)
class AssemblyDescriptorData : public InterfaceDescriptorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(AssemblyDescriptorData) == 56);

}
