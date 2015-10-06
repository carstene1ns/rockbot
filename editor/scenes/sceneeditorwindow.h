#ifndef SCENEEDITORWINDOW_H
#define SCENEEDITORWINDOW_H

#include <QMainWindow>
#include "scenes/tab_scenelist.h"
#include "scenes/tab_text.h"
#include "scenes/tab_image.h"
#include "scenes/tab_viewpoint.h"
#include "scenes/tab_scenelist.h"
#include "scenes/tab_sfx.h"
#include "scenes/tab_music.h"
#include "scenes/tab_cleararea.h"
#include "scenes/tab_animation.h"

namespace Ui {
class SceneEditorWindow;
}

class SceneEditorWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SceneEditorWindow(QWidget *parent = 0);
    ~SceneEditorWindow();

private slots:
    void on_actionSave_triggered();

private:
    Ui::SceneEditorWindow *ui;
    // tab elements
    TabText* text_tab;
    tab_image* image_tab;
    tab_viewpoint* viewpoint_tab;
    TabScenelist* scenes_tab;
    TabSfx* sfx_tab;
    TabMusic* music_tab;
    TabClearArea* cleararea_tab;
    TabAnimation* animation_tab;

};

#endif // SCENEEDITORWINDOW_H
