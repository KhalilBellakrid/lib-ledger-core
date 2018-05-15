// This file was GENERATED by command:
//     generate_bitcoin_fixtures.py
// DO NOT EDIT BY HAND!!!
#include "segwit_xpub_fixtures.h"

namespace ledger {
	namespace testing {
		namespace segwit_xpub {
			core::api::ExtendedKeyAccountCreationInfo XPUB_INFO(
			        0, {"testnet"}, {"49'/1'/0'"}, {"tpubDCcvqEHx7prGddpWTfEviiew5YLMrrKy4oJbt14teJZenSi6AYMAs2SNXwYXFzkrNYwECSmobwxESxMCrpfqw4gsUt88bcr8iMrJmbb8P2q"}
			);
			std::shared_ptr<core::BitcoinLikeAccount> inflate(const std::shared_ptr<core::WalletPool>& pool, const std::shared_ptr<core::AbstractWallet>& wallet) {
				auto account = std::dynamic_pointer_cast<core::BitcoinLikeAccount>(wait(wallet->newAccountWithExtendedKeyInfo(XPUB_INFO)));
				soci::session sql(pool->getDatabaseSessionPool()->getPool());
				sql.begin();				account->putTransaction(sql, *core::JSONUtils::parse<core::TransactionParser>(TX_1));
				account->putTransaction(sql, *core::JSONUtils::parse<core::TransactionParser>(TX_2));
				account->putTransaction(sql, *core::JSONUtils::parse<core::TransactionParser>(TX_3));
				sql.commit();
				return account;
			}
			const std::string TX_1 = "{\"inputs\": [{\"value\": 140960772305, \"output_index\": 0, \"output_hash\": \"ca4189d66f82c38ed35be31f60458d0b4c5d80484464155fed124f76439790a3\", \"input_index\": 0, \"address\": \"mpq4SAyoBatE9yvycndmmmHzT7yXk3M1Pr\", \"script_signature\": \"483045022100d27b0f7eaf05231efda617e7401c16f35b92ae1bdbdbc3e6c9376a35597c5843022029a350efc8aaa958e4f67effaa9c51606c90387304c7846d373e5799ffacd85f01210391192a7c2ca13cd940eca85e8f1a674dfcdc387e2d77d260bd0da706455d66b1\"}], \"lock_time\": 1295612, \"hash\": \"9fe18237a93d1b2f2176f67c1908724b4485a93afbc408bcc4629025165d8182\", \"outputs\": [{\"script_hex\": \"76a9149e4bcfb99ad22c8227b63c9f686ba086d5c41c3688ac\", \"output_index\": 0, \"value\": 140833372742, \"address\": \"muwwsqHwvmXrt6mD955xJwrasp1DoEpcNr\"}, {\"script_hex\": \"a91428242bc4e7266060e084fab55fb70916b605d0b387\", \"output_index\": 1, \"value\": 127287563, \"address\": \"2MvuUMAG1NFQmmM69Writ6zTsYCnQHFG9BF\"}], \"amount\": 140960660305, \"confirmations\": 555, \"fees\": 112000, \"received_at\": \"2018-05-01T07:59:13Z\", \"block\": {\"time\": \"2018-05-01T08:04:44Z\", \"hash\": \"00000000000000c4bb4e485a94681417687f06a1439601cf1d7287145de17da4\", \"height\": 1295613}}";
			const std::string TX_2 = "{\"inputs\": [{\"value\": 127287563, \"output_index\": 1, \"output_hash\": \"9fe18237a93d1b2f2176f67c1908724b4485a93afbc408bcc4629025165d8182\", \"input_index\": 0, \"address\": \"2MvuUMAG1NFQmmM69Writ6zTsYCnQHFG9BF\", \"txinwitness\": [\"304502210085a85a2dec818ece4748c0c9d71640a5703a5eec9112dd58183b048c6a9961cf02201dd0beabc1c3500f75849a046deab9e2d2ce388fff6cb92693508f5ea406471d01\", \"03d2f424cd1f60e96241a968b9da3c3f6b780f90538bdf306350b9607c279ad486\"], \"script_signature\": \"160014e4fae08faaa8469c5756fda7fbfde46922a4e7b2\"}], \"lock_time\": 0, \"hash\": \"93ae1990d10745e3ab4bf742d4b06bd513e7a26384617a17525851e4e3ed7038\", \"outputs\": [{\"script_hex\": \"a91428242bc4e7266060e084fab55fb70916b605d0b387\", \"output_index\": 0, \"value\": 50000000, \"address\": \"2MvuUMAG1NFQmmM69Writ6zTsYCnQHFG9BF\"}, {\"script_hex\": \"a91401445204b7063c76c702501899334d6f7499806d87\", \"output_index\": 1, \"value\": 77285903, \"address\": \"2MsMvWTbPMg4eiSudDa5i7y8XNC8fLCok3c\"}], \"amount\": 127285903, \"confirmations\": 521, \"fees\": 1660, \"received_at\": \"2018-05-01T12:13:02Z\", \"block\": {\"time\": \"2018-05-01T12:17:42Z\", \"hash\": \"000000000000ef64293d25ebc08bd5121eeaf9ad6a6e44bd327adb365b4e9204\", \"height\": 1295647}}";
			const std::string TX_3 = "{\"inputs\": [{\"value\": 127287563, \"output_index\": 1, \"output_hash\": \"9fe18237a93d1b2f2176f67c1908724b4485a93afbc408bcc4629025165d8182\", \"input_index\": 0, \"address\": \"2MvuUMAG1NFQmmM69Writ6zTsYCnQHFG9BF\", \"txinwitness\": [\"304502210085a85a2dec818ece4748c0c9d71640a5703a5eec9112dd58183b048c6a9961cf02201dd0beabc1c3500f75849a046deab9e2d2ce388fff6cb92693508f5ea406471d01\", \"03d2f424cd1f60e96241a968b9da3c3f6b780f90538bdf306350b9607c279ad486\"], \"script_signature\": \"160014e4fae08faaa8469c5756fda7fbfde46922a4e7b2\"}], \"lock_time\": 0, \"hash\": \"93ae1990d10745e3ab4bf742d4b06bd513e7a26384617a17525851e4e3ed7038\", \"outputs\": [{\"script_hex\": \"a91428242bc4e7266060e084fab55fb70916b605d0b387\", \"output_index\": 0, \"value\": 50000000, \"address\": \"2MvuUMAG1NFQmmM69Writ6zTsYCnQHFG9BF\"}, {\"script_hex\": \"a91401445204b7063c76c702501899334d6f7499806d87\", \"output_index\": 1, \"value\": 77285903, \"address\": \"2MsMvWTbPMg4eiSudDa5i7y8XNC8fLCok3c\"}], \"amount\": 127285903, \"confirmations\": 521, \"fees\": 1660, \"received_at\": \"2018-05-01T12:13:02Z\", \"block\": {\"time\": \"2018-05-01T12:17:42Z\", \"hash\": \"000000000000ef64293d25ebc08bd5121eeaf9ad6a6e44bd327adb365b4e9204\", \"height\": 1295647}}";
		}
	}
}