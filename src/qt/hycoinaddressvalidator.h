// Copyright (c) 2011-2014 The Hycoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef HYCOIN_QT_HYCOINADDRESSVALIDATOR_H
#define HYCOIN_QT_HYCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class HycoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit HycoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Hycoin address widget validator, checks for a valid hycoin address.
 */
class HycoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit HycoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // HYCOIN_QT_HYCOINADDRESSVALIDATOR_H
