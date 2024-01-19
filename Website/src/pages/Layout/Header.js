import { Link } from "react-router-dom";
import { indexPath, linksPath, patchNotesPath } from "../../routes";

const Header = () => {
    return (
        <nav className="navbar navbar-expand-lg navbar-light bg-light py-3 px-5 d-flex justify-content-between">
            <div>
                <Link className="navbar-brand d-inline-bloc" to={indexPath}>Factory Land</Link>
                
                <div className="d-inline-block">
                    <ul className="navbar-nav mr-auto">
                        <li className="nav-item active">
                            <Link className="nav-link" to={indexPath}>Accueil</Link>
                        </li>
                        <li className="nav-item">
                            <Link className="nav-link" to={patchNotesPath}>Patch notes</Link>
                        </li>
                        <li className="nav-item">
                            <Link className="nav-link" to={linksPath}>Liens</Link>
                        </li>
                        {/* <li className="nav-item dropdown">
                            <a className="nav-link dropdown-toggle" href="#" id="navbarDropdown" role="button" data-toggle="dropdown" aria-haspopup="true" aria-expanded="false">
                            Dropdown
                            </a>
                            <div className="dropdown-menu" aria-labelledby="navbarDropdown">
                            <a className="dropdown-item" href="#">Action</a>
                            <a className="dropdown-item" href="#">Another action</a>
                            <div className="dropdown-divider"></div>
                            <a className="dropdown-item" href="#">Something else here</a>
                            </div>
                        </li> */}
                    </ul>
                </div>
            </div>

            <button type="button" className="btn btn-primary">Télécharger la dernière version du jeu</button>
        </nav>
    )
}

export default Header;
