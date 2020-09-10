using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Drawing
{
    public partial class Form1 : Form
    {
        bool Drag = false;
        bool Modified = false;
        Bitmap MyBitmap;
        Pen myPen = new Pen(Color.Black, 2);
        private Point point1;
        private Point point2;

        public Form1()
        {
            InitializeComponent();
        }

        private void 색깔ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (colorDialog1.ShowDialog() == DialogResult.OK)
            {
                myPen.Color = colorDialog1.Color;
            }

        }

        private void Form1_Load(object sender, EventArgs e)
        {
            MyBitmap = new Bitmap(pictureBox1.Width, pictureBox1.Height);
            pictureBox1.Image = MyBitmap;
            Brush MyBrush = new SolidBrush(Color.White);
            Graphics g = Graphics.FromImage(pictureBox1.Image);
            g.FillRectangle(MyBrush, 0, 0, pictureBox1.Image.Width, pictureBox1.Image.Height);
        }

        private void Form1_FormClosing(object sender, FormClosingEventArgs e)
        {

            try
            {
                if (Modified == true)
                {
                    DialogResult answer = MessageBox.Show("변경된 내용을 저장하시겠습니까?", "저장", MessageBoxButtons.YesNoCancel);
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
                        }
                    }
                    else if (answer == DialogResult.Cancel)
                    {
                        e.Cancel = true;
                    }

                }
            }
            catch
            {
                MessageBox.Show("종료하는 도중 이상이 생겼습니다.", "에러", MessageBoxButtons.OK, MessageBoxIcon.Warning);
            }
        }

        private void pictureBox1_MouseUp(object sender, MouseEventArgs e)
        {
            Drag = false;
        }

        private void pictureBox1_MouseDown(object sender, MouseEventArgs e)
        {
            Drag = true;
            point1 = new Point(e.X, e.Y);
        }

        private void pictureBox1_MouseMove(object sender, MouseEventArgs e)
        {
            if (Drag == true)
            {
                Form1.ActiveForm.Text = "Drwline-X " + e.X + " Y " + e.Y;
                point2 = new Point(e.X, e.Y);
                Graphics g = Graphics.FromImage(pictureBox1.Image);
                g.DrawLine(myPen, point1, point2);
                pictureBox1.Refresh();
                point1 = point2;
                Modified = true;
            }
        }

        private void 새로만들기ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            try
            {
                if (Modified == true)
                {
                    DialogResult answer = MessageBox.Show("변경된 내용을 저장하시겠습니까?", "저장", MessageBoxButtons.YesNoCancel);
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
                        }
                        MyBitmap = new Bitmap(pictureBox1.Width, pictureBox1.Height);
                        pictureBox1.Image = MyBitmap;
                        Brush MyBrush = new SolidBrush(Color.White);
                        Graphics g = Graphics.FromImage(pictureBox1.Image);
                        g.FillRectangle(MyBrush, 0, 0, pictureBox1.Image.Width, pictureBox1.Image.Height);
                    }

                    else if (answer == DialogResult.No)
                    {
                        MyBitmap = new Bitmap(pictureBox1.Width, pictureBox1.Height);
                        pictureBox1.Image = MyBitmap;
                        Brush MyBrush = new SolidBrush(Color.White);
                        Graphics g = Graphics.FromImage(pictureBox1.Image);
                        g.FillRectangle(MyBrush, 0, 0, pictureBox1.Image.Width, pictureBox1.Image.Height);
                        Modified = false;
                    }
                }
            }
            catch
            {
                MessageBox.Show("새파일을 만들던 도중 이상이생겼습니다.", "에러", MessageBoxButtons.OK, MessageBoxIcon.Warning);
            }

        }

        private void 열기ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (Modified == false)
            {
                if (openFileDialog1.ShowDialog() == DialogResult.OK)
                {
                    pictureBox1.Image = Image.FromFile(openFileDialog1.FileName);
                }
            }
            if (Modified == true)
            {
                DialogResult answer = MessageBox.Show("변경된 내용을 변경하시겠습니까?", "저장", MessageBoxButtons.YesNoCancel);
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
                    }
                    Modified = false;
                    if (openFileDialog1.ShowDialog() == DialogResult.OK)
                    {
                        pictureBox1.Image = Image.FromFile(openFileDialog1.FileName);
                    }
                }
                else if (answer == DialogResult.No)
                {
                    if (openFileDialog1.ShowDialog() == DialogResult.OK)
                    {
                        pictureBox1.Image = Image.FromFile(openFileDialog1.FileName);
                    }
                }
            }
        }

        private void 저장하기ToolStripMenuItem_Click(object sender, EventArgs e)
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
            }
        }

        private void 끝내기ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void toolStripMenuItem2_Click(object sender, EventArgs e)
        {
            myPen.Width = 10;
        }

        private void toolStripMenuItem3_Click(object sender, EventArgs e)
        {
            myPen.Width = 7;

        }

        private void toolStripMenuItem4_Click(object sender, EventArgs e)
        {
            myPen.Width = 5;

        }

        private void toolStripMenuItem5_Click(object sender, EventArgs e)
        {
            myPen.Width = 3;

        }

        private void toolStripMenuItem6_Click(object sender, EventArgs e)
        {
            myPen.Width = 1;

        }

        private void soildToolStripMenuItem_Click(object sender, EventArgs e)
        {
            myPen.DashStyle = System.Drawing.Drawing2D.DashStyle.Solid;
        }

        private void dotToolStripMenuItem_Click(object sender, EventArgs e)
        {
            myPen.DashStyle = System.Drawing.Drawing2D.DashStyle.Dot;
        }

        private void dashDotToolStripMenuItem_Click(object sender, EventArgs e)
        {
            myPen.DashStyle = System.Drawing.Drawing2D.DashStyle.DashDot;
        }
    }
}
