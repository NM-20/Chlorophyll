#pragma once

#include <IcelinSdk.PvZGW2/ShortPrimitives.h>
#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TypeInfo/ITypedObject.h>

namespace fb
{

/* TypeInfo (Array): 0000000142833878
   RuntimeId:        0142
   TypeInfo Kind:    ClassInfo
   ClassId:          05E2
   VfTable:          00000001421E79B0
   Address (Base):   00000001430B4190
*/
#pragma pack(push, 8)
class DataContainer : public ITypedObject
{
public:
  typedef struct ClassInfo TypeInfo_t;

protected:
	mutable u16	m_refCnt;
	mutable u16	m_flags;
  char        pad_000C[0x04];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(DataContainer) == 16);

}
