void DutchFlagPartition(vector<int>* A_ptr) {
  vector<int>& A = *A_ptr;
  int pivot = 1;

  int smaller = -1, larger = A.size() - 1;
  for (int i = 0; i <= larger;) {
      if (A[i] > pivot) swap(A[i], A[larger--]);
      else if (A[i] == pivot) i++;
      else swap(A[++smaller], A[i++]);
  }
}
