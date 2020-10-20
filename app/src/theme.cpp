#include "./ui_mainwindow.h"
#include "mainwindow.h"

void MainWindow::on_checkBox_stateChanged(int arg1) {
    if(arg1 == 2 ) {
        m_ui->centralwidget->setStyleSheet(
        "QWidget { background-color: #708090; }");
        m_ui->m_folderList->setStyleSheet(
        "QWidget { background-color: #e6e6e6;}");

        m_ui->m_dir_l->setStyleSheet("QLabel { color: black; }");
        m_ui->m_line_artist->setStyleSheet("QLineEdit { color: white; }");
        m_ui->m_line_title->setStyleSheet("QLineEdit { color: black; }");
        m_ui->m_line_artist->setStyleSheet("QLineEdit { color: black; }");
        m_ui->m_line_album->setStyleSheet("QLineEdit { color: black; }");
        m_ui->m_line_genre->setStyleSheet("QLineEdit { color: black; }");
        m_ui->m_line_year->setStyleSheet("QLineEdit { color: black; }");
        m_ui->m_line_comment->setStyleSheet("QLineEdit { color: black; }");
        m_ui->m_title_l->setStyleSheet("QLabel { color: black; }");
        m_ui->m_artist_l->setStyleSheet("QLabel { color: black; }");
        m_ui->m_album_l->setStyleSheet("QLabel { color: black; }");
        m_ui->m_genre_l->setStyleSheet("QLabel { color: black; }");
        m_ui->m_year_l->setStyleSheet("QLabel { color: black; }");
        m_ui->m_comment_l->setStyleSheet("QLabel { color: black; }");
    }
    else{
        m_ui->centralwidget->setStyleSheet(
            "QWidget { background-color: #323232; }");
        m_ui->m_folderList->setStyleSheet(
            "QWidget { background-color: #1e1e1e; }");

        m_ui->m_dir_l->setStyleSheet("QLabel { color: white; }");
         m_ui->m_line_title->setStyleSheet("QLineEdit { color: white; }");
         m_ui->m_line_artist->setStyleSheet("QLineEdit { color: white; }");
         m_ui->m_line_album->setStyleSheet("QLineEdit { color: white; }");
         m_ui->m_line_genre->setStyleSheet("QLineEdit { color: white; }");
         m_ui->m_line_year->setStyleSheet("QLineEdit { color: white; }");
         m_ui->m_line_comment->setStyleSheet("QLineEdit { color: white; }");
         m_ui->m_title_l->setStyleSheet("QLabel { color: white; }");
         m_ui->m_artist_l->setStyleSheet("QLabel { color: white; }");
         m_ui->m_album_l->setStyleSheet("QLabel { color: white; }");
         m_ui->m_genre_l->setStyleSheet("QLabel { color: white; }");
         m_ui->m_year_l->setStyleSheet("QLabel { color: white; }");
         m_ui->m_comment_l->setStyleSheet("QLabel { color: white; }");
    }
}

