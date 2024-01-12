import { BrowserRouter, Route, Routes } from 'react-router-dom';
import './App.css';
import Home from './pages/Home/Home';
import Layout from './pages/Layout/Layout';
import Links from './pages/Links/Links';
import PageNotFound from './pages/PageNotFound/PageNotFound';

const App = () => {
  return (
    <BrowserRouter>
      <Routes>
        <Route path={"/"} element={<Layout />}>
          <Route index element={<Home />} />
          <Route path={"/links"} element={<Links />} />
          <Route path="*" element={<PageNotFound />} />
        </Route>
      </Routes>
    </BrowserRouter>
  );
};

export default App;
