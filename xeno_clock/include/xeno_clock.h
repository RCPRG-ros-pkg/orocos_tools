ros::Time now() {

#if OROCOS_TARGET_XENOMAI == 1
  ros::Time t;
  
  timespec start;
  clock_gettime(CLOCK_HOST_REALTIME, &start);
  t.sec  = start.tv_sec;
  t.nsec = start.tv_nsec;
  return t;
#elif OROCOS_TARGET_GNULINUX == 1
  return ros::Time::now();
#else
  #error "unsupported OROCOS_TARGET"
#endif
}
