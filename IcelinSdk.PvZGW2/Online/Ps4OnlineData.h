#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/OnlinePlatformData.h>
#include <IcelinSdk.PvZGW2/Online/Ps4OnlineTitleData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142857F08
   RuntimeId:        19BC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          081B
   VfTable:          00000001422D5140
   Address (Base):   000000014310D050
*/
#pragma pack(push, 8)
class Ps4OnlineData : public OnlinePlatformData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Ps4OnlineTitleData DefaultTitleData; /* 0x0018 */
  FB_STDARRAY(struct Ps4OnlineTitleData) TitleData; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(Ps4OnlineData) == 48);

}
