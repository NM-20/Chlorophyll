#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/SystemSettings.h>

namespace fb
{

/* TypeInfo (Array): 000000014284AD88
   RuntimeId:        0EF3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11E7
   VfTable:          0000000142262CA8
   Address (Base):   00000001430D0CE0
*/
#pragma pack(push, 8)
class WindowSettings : public SystemSettings
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 PosX; /* 0x0020 */
  FB_INT32 PosY; /* 0x0024 */
  FB_UINT32 Width; /* 0x0028 */
  FB_UINT32 Height; /* 0x002C */
  FB_BOOLEAN AutoSize; /* 0x0030 */
  FB_BOOLEAN FullscreenAutoSize; /* 0x0031 */
  FB_BOOLEAN EnableEscape; /* 0x0032 */
  FB_BOOLEAN EnableInputOnActivate; /* 0x0033 */
  FB_BOOLEAN HibernateOnClose; /* 0x0034 */
  FB_BOOLEAN Hidden; /* 0x0035 */
  FB_BOOLEAN Minimized; /* 0x0036 */
  FB_BOOLEAN AllowWindowsLargerThanDesktop; /* 0x0037 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(WindowSettings) == 56);

}
