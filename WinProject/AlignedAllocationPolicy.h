#pragma once

//warning C4316 ó���� �ϱ� ���� �� ���ǿ�
template<size_t Alibnment>
class AlignedAllocationPolicy
{
public:
	static void* operactor new(size_t size){
		return _aligned_malloc(size, Alignment);
	}
		static void operactor delete(void* memory) {
		_aligned_free(memory);
	}

private:

};
