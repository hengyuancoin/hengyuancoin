from distutils.core import setup
setup(name='hycspendfrom',
      version='1.0',
      description='Command-line utility for hycoin "coin control"',
      author='Gavin Andresen',
      author_email='gavin@hycoinfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
