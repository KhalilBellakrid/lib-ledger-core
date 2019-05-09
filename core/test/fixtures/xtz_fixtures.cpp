// This file was GENERATED by command:
//     generate_fixtures.py
// DO NOT EDIT BY HAND!!!
#include "xtz_fixtures.h"

namespace ledger {
	namespace testing {
		namespace xtz {
			core::api::AccountCreationInfo XPUB_INFO(
			        0, {"xtz"}, {"44'/1729'/0'"}, 
			{ledger::core::hex::toByteArray("039ea82278f0057b8b041a146f810aa2d84b8ffdfaef3e625624706ad13e12b717")} , {ledger::core::hex::toByteArray("abcc4933bec06eeca6628b9e44f8e71d5e3cf510c0450dd1e29d9aa0f1717da9")}
			);
			std::shared_ptr<core::TezosLikeAccount> inflate(const std::shared_ptr<core::WalletPool>& pool, const std::shared_ptr<core::AbstractWallet>& wallet) {
				auto account = std::dynamic_pointer_cast<core::TezosLikeAccount>(wait(wallet->newAccountWithInfo(XPUB_INFO)));
				soci::session sql(pool->getDatabaseSessionPool()->getPool());
				sql.begin();				account->putTransaction(sql, *core::JSONUtils::parse<core::TezosLikeTransactionParser>(TX_1));
				account->putTransaction(sql, *core::JSONUtils::parse<core::TezosLikeTransactionParser>(TX_2));
				account->putTransaction(sql, *core::JSONUtils::parse<core::TezosLikeTransactionParser>(TX_3));
				account->putTransaction(sql, *core::JSONUtils::parse<core::TezosLikeTransactionParser>(TX_4));
				account->putTransaction(sql, *core::JSONUtils::parse<core::TezosLikeTransactionParser>(TX_5));
				account->putTransaction(sql, *core::JSONUtils::parse<core::TezosLikeTransactionParser>(TX_6));
				account->putTransaction(sql, *core::JSONUtils::parse<core::TezosLikeTransactionParser>(TX_7));
				account->putTransaction(sql, *core::JSONUtils::parse<core::TezosLikeTransactionParser>(TX_8));
				account->putTransaction(sql, *core::JSONUtils::parse<core::TezosLikeTransactionParser>(TX_9));
				account->putTransaction(sql, *core::JSONUtils::parse<core::TezosLikeTransactionParser>(TX_10));
				account->putTransaction(sql, *core::JSONUtils::parse<core::TezosLikeTransactionParser>(TX_11));
				sql.commit();
				return account;
			}
			const std::string TX_1 = "{\"block_hash\": \"BL7ykStJ7Lbiv9Ut2g8ri7QGcXn3CNN6edg91AZkc3JyRSJyn7E\", \"type\": {\"operations\": [{\"src\": {\"tz\": \"tz1KtGwriE7VuLwT3LwuvU9Nv4wAxP7XZ57d\"}, \"kind\": \"transaction\", \"burn\": 0, \"fee\": 0, \"destination\": {\"tz\": \"tz1TRspM5SeZpaQUhzByXbEvqKF1vnCM2YTK\"}, \"op_level\": 171687, \"failed\": false, \"amount\": \"15000000000\", \"internal\": false, \"storage_limit\": \"0\", \"timestamp\": \"2018-11-02T11:04:29Z\", \"gas_limit\": \"200\", \"counter\": 125108}], \"source\": {\"tz\": \"tz1KtGwriE7VuLwT3LwuvU9Nv4wAxP7XZ57d\"}, \"kind\": \"manager\"}, \"hash\": \"ooio7cQG6rHGYxMyavQRa4W4TKpQVtFRxSE7YKohFPC1sJEWqw7\", \"network_hash\": \"NetXdQprcVkpaWU\"}";
			const std::string TX_2 = "{\"block_hash\": \"BMHFwEUp5Prtr3uNcqR5DjXvRj6Ay1Hj2EuuaSju2qA9uCqNMqR\", \"type\": {\"operations\": [{\"src\": {\"tz\": \"tz1bDXD6nNSrebqmAnnKKwnX1QdePSMCj4MX\"}, \"kind\": \"transaction\", \"burn\": 0, \"fee\": 5000, \"destination\": {\"tz\": \"tz1TRspM5SeZpaQUhzByXbEvqKF1vnCM2YTK\"}, \"op_level\": 171661, \"failed\": false, \"amount\": \"55000000000\", \"internal\": false, \"storage_limit\": \"0\", \"timestamp\": \"2018-11-02T10:38:29Z\", \"gas_limit\": \"260\", \"counter\": 204014}], \"source\": {\"tz\": \"tz1bDXD6nNSrebqmAnnKKwnX1QdePSMCj4MX\"}, \"kind\": \"manager\"}, \"hash\": \"opTKKomay8tM3PDm3EGm9poSRkhGb7WVv67uFFWyfFEG4KUDG1o\", \"network_hash\": \"NetXdQprcVkpaWU\"}";
			const std::string TX_3 = "{\"block_hash\": \"BLiaHqgyCjGSuWYKgpjoXQWYwQCjB13p8Go2gxys5bNpfyEqGHo\", \"type\": {\"operations\": [{\"src\": {\"tz\": \"KT18yTsDxUbVrenxZsbFSx6Ai72hRHod9pHV\"}, \"kind\": \"transaction\", \"burn\": 0, \"fee\": 1000, \"destination\": {\"tz\": \"tz1TRspM5SeZpaQUhzByXbEvqKF1vnCM2YTK\"}, \"op_level\": 110215, \"failed\": false, \"amount\": \"9999900000\", \"internal\": false, \"storage_limit\": \"0\", \"timestamp\": \"2018-09-19T12:28:30Z\", \"gas_limit\": \"200\", \"counter\": 7574}], \"source\": {\"tz\": \"KT18yTsDxUbVrenxZsbFSx6Ai72hRHod9pHV\"}, \"kind\": \"manager\"}, \"hash\": \"oovbgJFCwuq2WqJdHdj6QSKKFPaCym3gTrLt5Sm45wdygW8GL5Q\", \"network_hash\": \"NetXdQprcVkpaWU\"}";
			const std::string TX_4 = "{\"block_hash\": \"BMdyZjkMFH93sJ1kEBbY1kvNYmjU6ojjQ98YUhADtt6Fofk7uct\", \"type\": {\"operations\": [{\"src\": {\"tz\": \"KT18yTsDxUbVrenxZsbFSx6Ai72hRHod9pHV\"}, \"kind\": \"transaction\", \"burn\": 0, \"fee\": 1000, \"destination\": {\"tz\": \"tz1TRspM5SeZpaQUhzByXbEvqKF1vnCM2YTK\"}, \"op_level\": 106340, \"failed\": false, \"amount\": \"6499900000\", \"internal\": false, \"storage_limit\": \"0\", \"timestamp\": \"2018-09-16T18:45:01Z\", \"gas_limit\": \"200\", \"counter\": 7177}], \"source\": {\"tz\": \"KT18yTsDxUbVrenxZsbFSx6Ai72hRHod9pHV\"}, \"kind\": \"manager\"}, \"hash\": \"opGYwwmkHBFV72TcaExyv6yCYdSPeQG9NgwZYbyJSaoCY4PXtGn\", \"network_hash\": \"NetXdQprcVkpaWU\"}";
			const std::string TX_5 = "{\"block_hash\": \"BLehAd1GZxetPTM4fjEcpSvN34XZEQoHhPdrNqQhAaHMMsZLmS3\", \"type\": {\"operations\": [{\"src\": {\"tz\": \"KT18yTsDxUbVrenxZsbFSx6Ai72hRHod9pHV\"}, \"kind\": \"transaction\", \"burn\": 0, \"fee\": 1000, \"destination\": {\"tz\": \"tz1TRspM5SeZpaQUhzByXbEvqKF1vnCM2YTK\"}, \"op_level\": 103811, \"failed\": false, \"amount\": \"9999900000\", \"internal\": false, \"storage_limit\": \"0\", \"timestamp\": \"2018-09-14T23:20:17Z\", \"gas_limit\": \"200\", \"counter\": 7038}], \"source\": {\"tz\": \"KT18yTsDxUbVrenxZsbFSx6Ai72hRHod9pHV\"}, \"kind\": \"manager\"}, \"hash\": \"onmArATvN2FRewJhmXzaZsgxSC7jRmw7HT8e3HDhAwiCsJPCk4N\", \"network_hash\": \"NetXdQprcVkpaWU\"}";
			const std::string TX_6 = "{\"block_hash\": \"BLZC8nHskx29wp6HgaF8HbkxhDro9cGw8HpjdwXMor9B5nEuPge\", \"type\": {\"operations\": [{\"src\": {\"tz\": \"KT18yTsDxUbVrenxZsbFSx6Ai72hRHod9pHV\"}, \"kind\": \"transaction\", \"burn\": 0, \"fee\": 1000, \"destination\": {\"tz\": \"tz1TRspM5SeZpaQUhzByXbEvqKF1vnCM2YTK\"}, \"op_level\": 101866, \"failed\": false, \"amount\": \"9999900000\", \"internal\": false, \"storage_limit\": \"0\", \"timestamp\": \"2018-09-13T13:16:58Z\", \"gas_limit\": \"200\", \"counter\": 6888}], \"source\": {\"tz\": \"KT18yTsDxUbVrenxZsbFSx6Ai72hRHod9pHV\"}, \"kind\": \"manager\"}, \"hash\": \"ooDrwYi1bek2BtKwq1z5vTHsDLwDreGnuqpmxAvzV9pcoeKWkiV\", \"network_hash\": \"NetXdQprcVkpaWU\"}";
			const std::string TX_7 = "{\"block_hash\": \"BKjf1hgYu6a9e5x41fz3FCpLr93ypva3kBk5WEgTeGneoxBMptK\", \"type\": {\"operations\": [{\"src\": {\"tz\": \"tz1TRspM5SeZpaQUhzByXbEvqKF1vnCM2YTK\"}, \"kind\": \"transaction\", \"burn\": 0, \"fee\": 50000, \"destination\": {\"tz\": \"tz1NMdMmWZN8QPB8pY4ddncACDg1cHi1xD2e\"}, \"op_level\": 83778, \"failed\": false, \"amount\": 28000000, \"internal\": false, \"storage_limit\": \"0\", \"timestamp\": \"2018-08-31T13:07:16Z\", \"gas_limit\": \"200\", \"counter\": 37404}], \"source\": {\"tz\": \"tz1TRspM5SeZpaQUhzByXbEvqKF1vnCM2YTK\"}, \"kind\": \"manager\"}, \"hash\": \"ooBCSKNEG16pR9ZUtbUXWPfgz2H8bcmzFm7id6WcYX5MvRK5AHK\", \"network_hash\": \"NetXdQprcVkpaWU\"}";
			const std::string TX_8 = "{\"block_hash\": \"BLxLb5q75u74bNGBtqy4p4nYcLRJagAWETtb2ARB7yYi8o62S4a\", \"type\": {\"operations\": [{\"src\": {\"tz\": \"tz1XoPHC2AoG5RJhSPHopGKoJdV8pZJa4ccR\"}, \"kind\": \"transaction\", \"burn\": 0, \"fee\": 0, \"destination\": {\"tz\": \"tz1TRspM5SeZpaQUhzByXbEvqKF1vnCM2YTK\"}, \"str_parameters\": \"\", \"failed\": false, \"amount\": \"50000000000\", \"internal\": false, \"storage_limit\": \"0\", \"op_level\": 36736, \"timestamp\": \"2018-07-27T17:16:33Z\", \"gas_limit\": \"200\", \"counter\": 39628}], \"source\": {\"tz\": \"tz1XoPHC2AoG5RJhSPHopGKoJdV8pZJa4ccR\"}, \"kind\": \"manager\"}, \"hash\": \"oo8bQPkgQkMMSfG6iTnURa6oY3xPzgWWWaeiDGapftNB6rxXdzq\", \"network_hash\": \"NetXdQprcVkpaWU\"}";
			const std::string TX_9 = "{\"block_hash\": \"BLwbJyC5Z5WXAxgBRXFjeEgnxhhqmC4XzbcLFMzxPhX7FeyQRx3\", \"type\": {\"operations\": [{\"src\": {\"tz\": \"tz1XoPHC2AoG5RJhSPHopGKoJdV8pZJa4ccR\"}, \"kind\": \"transaction\", \"burn\": 0, \"fee\": 0, \"destination\": {\"tz\": \"tz1TRspM5SeZpaQUhzByXbEvqKF1vnCM2YTK\"}, \"str_parameters\": \"\", \"failed\": false, \"amount\": \"40000000000\", \"internal\": false, \"storage_limit\": \"0\", \"op_level\": 31982, \"timestamp\": \"2018-07-24T09:13:23Z\", \"gas_limit\": \"200\", \"counter\": 39625}], \"source\": {\"tz\": \"tz1XoPHC2AoG5RJhSPHopGKoJdV8pZJa4ccR\"}, \"kind\": \"manager\"}, \"hash\": \"oo2gQx1ft8FRCS3bKAfpLhSF3pCqqPfYs94QinfKSvqkeKwJqKg\", \"network_hash\": \"NetXdQprcVkpaWU\"}";
			const std::string TX_10 = "{\"block_hash\": \"BKtymhqqhFZdaZAcyWqCv6nT2TVkDWUN9uwc2bpBjFPw22S7cQ2\", \"type\": {\"operations\": [{\"src\": {\"tz\": \"tz1gAiP5zzKdh56evj1bxrXw27moCuPdAX5W\"}, \"kind\": \"transaction\", \"burn\": 0, \"fee\": 0, \"destination\": {\"tz\": \"tz1TRspM5SeZpaQUhzByXbEvqKF1vnCM2YTK\"}, \"str_parameters\": \"\", \"failed\": false, \"amount\": \"10000000000\", \"internal\": false, \"storage_limit\": \"0\", \"op_level\": 23398, \"timestamp\": \"2018-07-18T08:13:03Z\", \"gas_limit\": \"200\", \"counter\": 21921}], \"source\": {\"tz\": \"tz1gAiP5zzKdh56evj1bxrXw27moCuPdAX5W\"}, \"kind\": \"manager\"}, \"hash\": \"opTSTxGWQeHEYrnfmKihEKjp3JesXF8mPs6nVxWRYb9k1BHBupe\", \"network_hash\": \"NetXdQprcVkpaWU\"}";
			const std::string TX_11 = "{\"block_hash\": \"BL4n3xF1cEN7PQyRsCMMyv8g5c5pq7npRP8QDzWfnRHBwprysPK\", \"type\": {\"operations\": [{\"src\": {\"tz\": \"tz1gAiP5zzKdh56evj1bxrXw27moCuPdAX5W\"}, \"kind\": \"transaction\", \"burn\": 0, \"fee\": 0, \"destination\": {\"tz\": \"tz1TRspM5SeZpaQUhzByXbEvqKF1vnCM2YTK\"}, \"str_parameters\": \"\", \"failed\": false, \"amount\": 10000000, \"internal\": false, \"storage_limit\": \"0\", \"op_level\": 22815, \"timestamp\": \"2018-07-17T22:00:06Z\", \"gas_limit\": \"200\", \"counter\": 21920}, {\"src\": {\"tz\": \"tz1gAiP5zzKdh56evj1bxrXw27moCuPdAX5W\"}, \"kind\": \"reveal\", \"fee\": 0, \"public_key\": \"edpkushpcBdGz7qKyepAKfSmMaMyq76KDCgajyeDsNp15uj3onq8hy\", \"timestamp\": \"2018-07-17T22:00:06Z\", \"counter\": 21919, \"failed\": false, \"op_level\": 22815, \"internal\": false, \"storage_limit\": \"0\", \"gas_limit\": \"0\"}], \"source\": {\"tz\": \"tz1gAiP5zzKdh56evj1bxrXw27moCuPdAX5W\"}, \"kind\": \"manager\"}, \"hash\": \"oomhrGFfTBrKUmGLjMeGvQD39BmGD53h2ATiFKZ6FmekdSYCNqR\", \"network_hash\": \"NetXdQprcVkpaWU\"}";
		}
	}
}