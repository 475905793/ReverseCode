//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WCPayControlData;

@protocol WCPayTransferToBankCardFillInfoViewControllerDelegate <NSObject>
- (void)OnWCPayTransferToBankCardFillInfoViewControllerSelectReceiver:(WCPayControlData *)arg1;
- (void)OnWCPayTransferToBankCardFillInfoViewControllerFillBankCardNum:(WCPayControlData *)arg1;
- (void)OnWCPayTransferToBankCardFillInfoViewControllerClickHistoryReceiver;
- (void)OnWCPayTransferToBankCardFillInfoViewControllerClickHistoryRecord;
- (void)FillTransferToBankCardInfoOnNext:(WCPayControlData *)arg1;
- (void)FillTransferToBankCardInfoCancel;
@end
