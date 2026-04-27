#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852840
   RuntimeId:        15AC
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BA320
*/
enum EnlightenOutputFormat
{
  EnlightenOutputFormat_Fp16 = 0,
  EnlightenOutputFormat_R9G9B9E5 = 1,
  EnlightenOutputFormat_R11G11B10 = 2,
  EnlightenOutputFormatCount = 3,
};

}
