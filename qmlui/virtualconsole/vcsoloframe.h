/*
  Q Light Controller Plus
  vcsoloframe.h

  Copyright (c) Massimo Callegari

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

      http://www.apache.org/licenses/LICENSE-2.0.txt

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
*/

#ifndef VCSOLOFRAME_H
#define VCSOLOFRAME_H

#include "vcframe.h"

#define KXMLQLCVCSoloFrame "SoloFrame"

class VCSoloFrame : public VCFrame
{
    Q_OBJECT

    /*********************************************************************
     * Initialization
     *********************************************************************/
public:
    VCSoloFrame(Doc* doc = NULL, VirtualConsole *vc = NULL, QObject *parent = 0);
    ~VCSoloFrame();

    void render(QQuickView *view, QQuickItem *parent);

    /*********************************************************************
     * Widget Function
     *********************************************************************/
protected slots:
    void slotFunctionStarting(VCWidget *widget, quint32 fid, qreal intensity = 1.0);

    /*************************************************************************
     * Load & Save
     *************************************************************************/
protected:
    QString xmlTagName() const;
};


#endif
