#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/UIWidgetEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1CD8
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0441
   VfTable:          0000000000000000
   Address (Base):   000000014312F570
*/
class UIPlayerListWidgetRoot : public UIWidgetEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0108[0x0450];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0558 */

static_assert(sizeof(UIPlayerListWidgetRoot) == 1368);

}
