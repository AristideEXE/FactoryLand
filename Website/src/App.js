import { BrowserRouter, Route, Routes } from 'react-router-dom';
import './App.css';
import Home from './pages/Home/Home';
import Layout from './pages/Layout/Layout';
import Links from './pages/Links/Links';
import PageNotFound from './pages/PageNotFound/PageNotFound';
import { indexPath, linksPath, patchNotesPath } from './routes';
import PatchNotes from './pages/PatchNotes/PatchNotes';

const App = () => {
  return (
    <BrowserRouter>
      <Routes>
        <Route path={indexPath} element={<Layout />}>
          <Route index element={<Home />} />
          <Route path={linksPath} element={<Links />} />
          <Route path={patchNotesPath} element={<PatchNotes />} />
          <Route path="*" element={<PageNotFound />} />
        </Route>
      </Routes>
    </BrowserRouter>
  );
};

export default App;
