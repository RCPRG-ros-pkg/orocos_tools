ros::Time now() {
  ros::Time t;
  
  timespec start;
  clock_gettime(CLOCK_HOST_REALTIME, &start);
  t.sec  = start.tv_sec;
  t.nsec = start.tv_nsec;
  return t;
}
