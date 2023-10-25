import { Fragment } from "react";
import HeaderCartButton from './HeaderCartButton';
import MealsImg from '../../assets/meals (1).jpg';
import classes from './header.module.css';
const Header= props =>{
    return( 
        <Fragment>
        <header className={classes.header}>
            <h1>React Meals</h1>
            <HeaderCartButton onClick={props.showCart}/>
        </header> 
        <div className={classes['main-image']}>
        <img src={MealsImg} alt="a table of delicious food!"/>
        </div>
        </Fragment>
    );
};

export default Header;