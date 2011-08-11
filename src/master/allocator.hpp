#ifndef __ALLOCATOR_HPP__
#define __ALLOCATOR_HPP__

#include "master/master.hpp"

namespace mesos { namespace internal { namespace master {

class Allocator {
public:
  virtual ~Allocator() {}

  virtual void initialize(Master* _master) {}

  virtual void frameworkAdded(Framework *framework) {}

  virtual void frameworkRemoved(Framework *framework) {}

  virtual void slaveAdded(Slave *slave) {}

  virtual void slaveRemoved(Slave *slave) {}

  virtual void taskAdded(Task *task) {}

  virtual void taskRemoved(Task *task, TaskRemovalReason reason) {}

  virtual void offerReturned(Offer* offer,
                             OfferReturnReason reason,
                             const std::vector<SlaveResources>& resourcesLeft) {}

  virtual void offersRevived(Framework *framework) {}

  virtual void request(const FrameworkID& frameworkId,
		               const std::vector<ResourceRequest>& requests) {}

  virtual void timerTick() {}
};

}}} /* namespace */

#endif /* __ALLOCATOR_HPP__ */
