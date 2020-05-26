using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace DrawLine
{
    public partial class Form1 : Form
    {
        bool pbcp = false; //pad button change point, 현재 그림이 변경되었는가 확인
        bool md = false; //mouse down, 마우스버튼이 눌러졌는가를 확인
        Bitmap mybitmap;
        Pen mypen = new Pen(Color.Black, 2);
        private Point point1;
        private Point point2;

        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            Bitmap mybitmap = new Bitmap(pictureBox1.Width, pictureBox1.Height);
            pictureBox1.Image = mybitmap;

            Brush mybrush = new SolidBrush(Color.White);
            Graphics g = Graphics.FromImage(pictureBox1.Image);
            g.FillRectangle(mybrush, 0, 0, pictureBox1.Image.Width, pictureBox1.Image.Height);
        }

        private void Form1_FormClosing(object sender, FormClosingEventArgs e)
        {
            if (pbcp == true)
            {
                DialogResult answer = MessageBox.Show("끄기전에 변경된 사항을 저장하시겠습니까", "저장", MessageBoxButtons.YesNoCancel);

                if (answer == DialogResult.Yes)
                {
                    if (saveFileDialog1.ShowDialog() == DialogResult.OK)
                    {
                        if (saveFileDialog1.FilterIndex == 1)
                        {
                            pictureBox1.Image.Save(saveFileDialog1.FileName, System.Drawing.Imaging.ImageFormat.Jpeg);
                        }
                        else if (saveFileDialog1.FilterIndex == 2)
                        {
                            pictureBox1.Image.Save(saveFileDialog1.FileName, System.Drawing.Imaging.ImageFormat.Bmp);
                        }
                        else if (saveFileDialog1.FilterIndex == 3)
                        {
                            pictureBox1.Image.Save(saveFileDialog1.FileName, System.Drawing.Imaging.ImageFormat.Gif);
                        }
                    }
                }
                else if (answer == DialogResult.Cancel)
                {
                    e.Cancel = true;
                }
            }
        }

        private void pictureBox1_MouseDown(object sender, MouseEventArgs e)
        {
            md = true;
            point1 = new Point(e.X, e.Y);
        }

        private void pictureBox1_MouseUp(object sender, MouseEventArgs e)
        {
            md = false;
        }

        private void pictureBox1_MouseMove(object sender, MouseEventArgs e)
        {
            if (md == true)
            {
                point2 = new Point(e.X, e.Y);
                Graphics g = Graphics.FromImage(pictureBox1.Image);
                g.DrawLine(mypen, point1, point2);
                point1 = point2;
                pbcp = true;
                pictureBox1.Refresh();
            }
        }

        private void 새로만들기NToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (pbcp == true)
            {
                DialogResult answer = MessageBox.Show("변경사항을 저장하시겠습니까", "저장", MessageBoxButtons.YesNo);

                if (answer == DialogResult.Yes)
                {
                    if (saveFileDialog1.ShowDialog() == DialogResult.OK)
                    {
                        if (saveFileDialog1.FilterIndex == 1)
                        {
                            pictureBox1.Image.Save(saveFileDialog1.FileName, System.Drawing.Imaging.ImageFormat.Jpeg);
                        }
                        if (saveFileDialog1.FilterIndex == 2)
                        {
                            pictureBox1.Image.Save(saveFileDialog1.FileName, System.Drawing.Imaging.ImageFormat.Bmp);
                        }
                        if (saveFileDialog1.FilterIndex == 3)
                        {
                            pictureBox1.Image.Save(saveFileDialog1.FileName, System.Drawing.Imaging.ImageFormat.Gif);
                        }
                    }

                    Bitmap mybitmap = new Bitmap(pictureBox1.Width, pictureBox1.Height);
                    pictureBox1.Image = mybitmap;

                    Brush mybrush = new SolidBrush(Color.White);
                    Graphics g = Graphics.FromImage(pictureBox1.Image);
                    g.FillRectangle(mybrush, 0, 0, pictureBox1.Width, pictureBox1.Height);

                    pbcp = false;
                }
                else
                {
                    Bitmap mybitmap = new Bitmap(pictureBox1.Width, pictureBox1.Height);
                    pictureBox1.Image = mybitmap;

                    Brush mybrush = new SolidBrush(Color.White);
                    Graphics g = Graphics.FromImage(pictureBox1.Image);
                    g.FillRectangle(mybrush, 0, 0, pictureBox1.Width, pictureBox1.Height);
                }
            }
        }

        private void 열기OToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (pbcp == true)
            {
                DialogResult answer = MessageBox.Show("변경사항을 저장하시겠습니까", "저장", MessageBoxButtons.YesNo);

                if (answer == DialogResult.Yes)
                {
                    if (saveFileDialog1.ShowDialog() == DialogResult.OK)
                    {
                        if (saveFileDialog1.FilterIndex == 1)
                        {
                            pictureBox1.Image.Save(saveFileDialog1.FileName, System.Drawing.Imaging.ImageFormat.Jpeg);
                        }
                        if (saveFileDialog1.FilterIndex == 2)
                        {
                            pictureBox1.Image.Save(saveFileDialog1.FileName, System.Drawing.Imaging.ImageFormat.Bmp);
                        }
                        if (saveFileDialog1.FilterIndex == 3)
                        {
                            pictureBox1.Image.Save(saveFileDialog1.FileName, System.Drawing.Imaging.ImageFormat.Gif);
                        }
                    }

                    if (openFileDialog1.ShowDialog() == DialogResult.OK)
                    {
                        mybitmap.Dispose();

                        mybitmap = new Bitmap(Image.FromFile(openFileDialog1.FileName), pictureBox1.Width, pictureBox1.Height);
                        pictureBox1.Image = mybitmap;

                        pictureBox1.Refresh();
                    }
                }
                else
                {
                    if (openFileDialog1.ShowDialog() == DialogResult.OK)
                    {
                        mybitmap.Dispose();

                        mybitmap = new Bitmap(Image.FromFile(openFileDialog1.FileName), pictureBox1.Width, pictureBox1.Height);
                        pictureBox1.Image = mybitmap;

                        pictureBox1.Refresh();
                    }
                }
            }
        }

        private void 저장SToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (saveFileDialog1.ShowDialog() == DialogResult.OK)
            {
                if (saveFileDialog1.FilterIndex == 1)
                {
                    pictureBox1.Image.Save(saveFileDialog1.FileName, System.Drawing.Imaging.ImageFormat.Jpeg);
                }
                if (saveFileDialog1.FilterIndex == 2)
                {
                    pictureBox1.Image.Save(saveFileDialog1.FileName, System.Drawing.Imaging.ImageFormat.Bmp);
                }
                if (saveFileDialog1.FilterIndex == 3)
                {
                    pictureBox1.Image.Save(saveFileDialog1.FileName, System.Drawing.Imaging.ImageFormat.Gif);
                }
            }
        }

        private void 끝내기XToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void 굵기10ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            mypen.Width = 10;
        }

        private void 굵기7ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            mypen.Width = 7;
        }

        private void 굵기5ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            mypen.Width = 5;
        }

        private void 굵기2ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            mypen.Width = 2;
        }

        private void 굵기1ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            mypen.Width = 1;
        }

        private void slidToolStripMenuItem_Click(object sender, EventArgs e)
        {
            mypen.DashStyle = System.Drawing.Drawing2D.DashStyle.Solid;
        }

        private void dotToolStripMenuItem_Click(object sender, EventArgs e)
        {
            mypen.DashStyle = System.Drawing.Drawing2D.DashStyle.Dot;
        }

        private void dashDotToolStripMenuItem_Click(object sender, EventArgs e)
        {
            mypen.DashStyle = System.Drawing.Drawing2D.DashStyle.DashDot;
        }

        private void 선색깔CToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (colorDialog1.ShowDialog() != DialogResult.Cancel)
            {
                mypen.Color = colorDialog1.Color;
            }
        }
    }
}
