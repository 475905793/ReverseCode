//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@protocol WCMallCandidateTelephoneViewDelegate <NSObject>
- (NSString *)GetCandidateTelephoneEnsureTip;
- (NSString *)GetCandidateTelephoneDescription:(unsigned int)arg1 DifferentIndex:(NSMutableArray *)arg2;
- (unsigned int)GetNumberOfCandidateTelephoneListCount;
- (void)OnClickWCMallCandidateTelephoneEnsureCellClicked;
- (void)OnClickWCMallCandidateTelephoneCell:(unsigned int)arg1;
@end

