/*
    Copyright or (c) or Copr. Project-Team S3 (Sound Signals and Systems) and
    Analysis/Synthesis team, Laboratory of Sciences and Technologies of Music and
    Sound (UMR 9912), IRCAM-CNRS-UPMC, 1 place Igor Stravinsky, F-75004 Paris
    * contributors : Antoine Falaize, Thomas Helie,
    * corresponding contributor: antoine.falaize@ircam.fr
    * date: 2016/12/31 12:47:34

    This has been geerated by PyPHS which purpose is to generate C++
    code for the simulation of multiphysics system described by graph structures.

    This software is governed by the CeCILL-B license under French law and
    abiding by the rules of distribution of free software.  You can  use,
    modify and/ or redistribute the software under the terms of the CeCILL-B
    license as circulated by CEA, CNRS and INRIA at the following URL
    "http://www.cecill.info".

    As a counterpart to the access to the source code and  rights to copy,
    modify and redistribute granted by the license, users are provided only
    with a limited warranty  and the software's author,  the holder of the
    economic rights, and the successive licensors  have only  limited liability.

    In this respect, the user's attention is drawn to the risks associated
    with loading,  using,  modifying and/or developing or reproducing the
    software by the user in light of its specific status of free software,
    that may mean  that it is complicated to manipulate,  and  that  also
    therefore means  that it is reserved for developers  and  experienced
    professionals having in-depth computer knowledge. Users are therefore
    encouraged to load and test the software's suitability as regards their
    requirements in conditions enabling the security of their systems and/or
    data to be ensured and,  more generally, to use and operate it in the
    same conditions as regards security.

    The fact that you are presently reading this means that you have had
    knowledge of the CeCILL-B license and that you accept its terms.

    Created on 2016/12/31 12:47:34

    author: Antoine Falaize


===========================================================================

    This file was automatically generated by PyPHS, date 2017/04/01 10:12:59.

    It contains the code for the simulation of system 'CORE'.

===========================================================================
*/


#ifndef CORE_H
#define CORE_H

#include "iostream"
#include "vector"
#include "math.h"

# include "data.h"

#include </Users/Falaize/Documents/DEV/c++/bibliotheques/eigen/Eigen/Dense>

using namespace std;
using namespace Eigen;

class CORE {

// PUBLIC    
    public:
    void update(vector<double> &, vector<double> &);
    
    // Acessors to Arguments, return vector<double>
    
    vector<double> x_vector() const;
    vector<double> xl_vector() const;
    vector<double> xnl_vector() const;
    vector<double> dx_vector() const;
    vector<double> dxl_vector() const;
    vector<double> dxnl_vector() const;
    vector<double> w_vector() const;
    vector<double> wl_vector() const;
    vector<double> wnl_vector() const;
    vector<double> u_vector() const;
    vector<double> p_vector() const;
    vector<double> v_vector() const;
    vector<double> vl_vector() const;
    vector<double> vnl_vector() const;
    
    // Acessors to Arguments, return Matrix<double, n, m>
    
    Matrix<double, 2, 1> x() const;
    Matrix<double, 2, 1> xl() const;
    Matrix<double, 0, 0> xnl() const;
    Matrix<double, 2, 1> dx() const;
    Matrix<double, 2, 1> dxl() const;
    Matrix<double, 0, 0> dxnl() const;
    Matrix<double, 0, 0> w() const;
    Matrix<double, 0, 0> wl() const;
    Matrix<double, 0, 0> wnl() const;
    Matrix<double, 1, 1> u() const;
    Matrix<double, 0, 0> p() const;
    Matrix<double, 2, 1> v() const;
    Matrix<double, 2, 1> vl() const;
    Matrix<double, 0, 0> vnl() const;
    
    // Mutators for Arguments, type = vector<double>
    
    void set_x(vector<double> &);
    void set_xl(vector<double> &);
    void set_xnl(vector<double> &);
    void set_dx(vector<double> &);
    void set_dxl(vector<double> &);
    void set_dxnl(vector<double> &);
    void set_w(vector<double> &);
    void set_wl(vector<double> &);
    void set_wnl(vector<double> &);
    void set_u(vector<double> &);
    void set_p(vector<double> &);
    void set_v(vector<double> &);
    void set_vl(vector<double> &);
    void set_vnl(vector<double> &);
    
    // Mutators for Arguments, type = Matrix<double, n, m>
    
    void set_x(Matrix<double, 2, 1> &);
    void set_xl(Matrix<double, 2, 1> &);
    void set_xnl(Matrix<double, 0, 0> &);
    void set_dx(Matrix<double, 2, 1> &);
    void set_dxl(Matrix<double, 2, 1> &);
    void set_dxnl(Matrix<double, 0, 0> &);
    void set_w(Matrix<double, 0, 0> &);
    void set_wl(Matrix<double, 0, 0> &);
    void set_wnl(Matrix<double, 0, 0> &);
    void set_u(Matrix<double, 1, 1> &);
    void set_p(Matrix<double, 0, 0> &);
    void set_v(Matrix<double, 2, 1> &);
    void set_vl(Matrix<double, 2, 1> &);
    void set_vnl(Matrix<double, 0, 0> &);
    
    // Functions Results Accessors
    
    Matrix<double, 2, 2> jacFll() const;
    Matrix<double, 0, 2> jacFnll() const;
    Matrix<double, 2, 1> Gl() const;
    Matrix<double, 0, 0> Gnl() const;
    Matrix<double, 2, 0> jacGlnl() const;
    Matrix<double, 0, 0> jacGnlnl() const;
    Matrix<double, 2, 1> dxH() const;
    Matrix<double, 0, 0> z() const;
    Matrix<double, 1, 1> y() const;
    
    // Functions Results Accessors
    
    vector<double> jacFnll_vector() const;
    vector<double> Gl_vector() const;
    vector<double> Gnl_vector() const;
    vector<double> jacGnlnl_vector() const;
    vector<double> dxH_vector() const;
    vector<double> z_vector() const;
    vector<double> y_vector() const;
    
    // Oprations Results Accessors
    
    Matrix<double, 2, 1> ud_x() const;
    Matrix<double, 2, 2> ijacFll() const;
    Matrix<double, 2, 1> ud_vl() const;
    Matrix<double, 0, 0> save_Fnl() const;
    double res_Fnl() const;
    Matrix<double, 0, 0> Fnl() const;
    Matrix<double, 0, 0> jacFnl() const;
    Matrix<double, 0, 0> ijacFnl() const;
    Matrix<double, 0, 0> ud_vnl() const;
    double step_Fnl() const;
    
    // Oprations Results Accessors
    
    vector<double> ud_x_vector() const;
    vector<double> ud_vl_vector() const;
    vector<double> save_Fnl_vector() const;
    vector<double> Fnl_vector() const;
    vector<double> jacFnl_vector() const;
    vector<double> ijacFnl_vector() const;
    vector<double> ud_vnl_vector() const;
    
    // Default Constructor
    
    CORE();
    
    // Constructor with vector state initalization
    
    CORE(vector<double> &);
    
    // Constructor with matrix state initalization
    
    CORE(Matrix<double, 2, 1> &);
    
    // Default Destructor
    
    ~CORE();


// PRIVATE    
    private:
    
    // Parameters
    
    const unsigned int subs_ref = 0;
    
    const double * C = & subs[subs_ref][0];
    const double * R = & subs[subs_ref][1];
    const double * L = & subs[subs_ref][2];
    const double * f_s = & subs[subs_ref][3];
    
    // Arguments
    
    Matrix<double, 5, 1> args;
    
    double * xL = & args(0, 0);
    double * xC = & args(1, 0);
    double * dxL = & args(2, 0);
    double * dxC = & args(3, 0);
    double * uin = & args(4, 0);
    
    // Functions Results Definitions
    
    Matrix<double, 2, 2> _jacFll;
    Matrix<double, 0, 2> _jacFnll;
    Matrix<double, 2, 1> _Gl;
    Matrix<double, 0, 0> _Gnl;
    Matrix<double, 2, 0> _jacGlnl;
    Matrix<double, 0, 0> _jacGnlnl;
    Matrix<double, 2, 1> _dxH;
    Matrix<double, 0, 0> _z;
    Matrix<double, 1, 1> _y;
    
    // Functions Results Updates
    
    void jacFll_update();
    void jacFnll_update();
    void Gl_update();
    void Gnl_update();
    void jacGlnl_update();
    void jacGnlnl_update();
    void dxH_update();
    void z_update();
    void y_update();
    
    // Operations Results Definition
    
    Matrix<double, 2, 1> _ud_x;
    Matrix<double, 2, 2> _ijacFll;
    Matrix<double, 2, 1> _ud_vl;
    Matrix<double, 0, 0> _save_Fnl;
    double _res_Fnl;
    Matrix<double, 0, 0> _Fnl;
    Matrix<double, 0, 0> _jacFnl;
    Matrix<double, 0, 0> _ijacFnl;
    Matrix<double, 0, 0> _ud_vnl;
    double _step_Fnl;
    
    // Oprations Results Updates
    
    void ud_x_update();
    void ijacFll_update();
    void ud_vl_update();
    void save_Fnl_update();
    void res_Fnl_update();
    void Fnl_update();
    void jacFnl_update();
    void ijacFnl_update();
    void ud_vnl_update();
    void step_Fnl_update();
    
    // Initialization
    
    void init();
};

#endif /* CORE_H */