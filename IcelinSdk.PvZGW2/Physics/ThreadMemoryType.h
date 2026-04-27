#pragma once

/** @brief Provides the declaration for the `ThreadMemoryType` enumeration. */

namespace fb
{

enum ThreadMemoryType {
  HavokNonSimulationThread = 0,
  HavokSimulationThread    = 1,
  HavokLoadingThread       = 2,
};

}