#pragma once

/** @brief Provides the declaration for the `SmartRef` class and all related types. */

namespace fb
{

template<class T>
class StrictSmartRef {
private:
	/// The raw pointer.
	mutable T* m_ptr = nullptr;
};

template<class T>
class SmartRef : public StrictSmartRef<T> {
private:
};

}
