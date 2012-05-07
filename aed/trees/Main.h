/*
 * =====================================================================================
 *
 *       Filename:  Main.h
 *
 *    Description:  Header file for Main class
 *
 *        Version:  1.0
 *        Created:  05/05/2012 23:56:24
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Rodrigo Habib Gregori (), rodrigo.gregori@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#pragma	once

#include "Tree.h"

/*
 * =====================================================================================
 *        Class:  Main
 *  Description:  Main class for Tree
 * =====================================================================================
 */
class Main
{
    public:
        /* ====================  LIFECYCLE     ======================================= */
        Main ();                             /* constructor      */
        ~Main ();                            /* destructor       */

        /* ==================== OTHER METHODS  ================================= */
        void execute();

    protected:
        /* ====================  DATA MEMBERS  ======================================= */

    private:
        /* ====================  DATA MEMBERS  ======================================= */
        Tree tree;
        void treatOption(int option);
        void insertNode();
        void removeNode();
        void printTree();


}; /* -----  end of class Main  ----- */

