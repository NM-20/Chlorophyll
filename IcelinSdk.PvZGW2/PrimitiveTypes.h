#pragma once

/* @brief Provides preprocessor definitions for various primitive types used by Frostbite. */

#include <IcelinSdk.PvZGW2/Core/ArrayDefinitions.h>

#include <IcelinSdk.PvZGW2/Core/ResourceRef.h>
#include <IcelinSdk.PvZGW2/Core/FileRef.h>
#include <IcelinSdk.PvZGW2/Core/Guid.h>
#include <IcelinSdk.PvZGW2/Core/String.h>
#include <IcelinSdk.PvZGW2/Core/SmartHandle.h>

/* Array primitives. These must resolve to template specializations that only specifies types
   for the element.
*/
#define FB_STDARRAY(IN_ELEMENT_TYPE) \
  ::fb::Array<IN_ELEMENT_TYPE>

#define FB_REFARRAY(IN_ELEMENT_TYPE) \
  ::fb::RefArray<IN_ELEMENT_TYPE>

#define FB_BOOLEAN bool
#define FB_VOID    void

/* String type definitions. These must be manually defined, as the string type may be subject
   to change.
*/
#define FB_CSTRING ::fb::String

#define FB_FILEREF ::fb::FileRef

#define FB_FLOAT32 float
#define FB_FLOAT64 double

#define FB_GUID ::fb::Guid

/* Handle type definition. This must resolve to a type that can hold `DataContainer` pointers
   (such as `SmartHandle`).
*/
#define FB_HANDLE(IN_DATA_CONTAINER) \
  ::fb::SmartHandle<IN_DATA_CONTAINER>

/* Signed integer definitions, which may be modified as necessary for the respective game. */
#define FB_INT8  char
#define FB_INT16 short
#define FB_INT32 int
#define FB_INT64 long long

#define FB_RESOURCEREF ::fb::ResourceRef

/* Unsigned integer definitions, which may be modified as needed in their respective game. */
#define FB_UINT8  unsigned char
#define FB_UINT16 unsigned short
#define FB_UINT32 unsigned int
#define FB_UINT64 unsigned long long
