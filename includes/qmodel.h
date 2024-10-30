//qmodel.h
#ifndef QMODEL_H
#define QMODEL_H

class qmodel{
public:

  int qmodel_SignalId = 0;

    enum{ qstatic_model = 0, qrigged_model = 1, qphysics_model = 2 }modelformat;
    const char * modelextension = "*.gmodel";
    void ModelExtension();
};

#endif
