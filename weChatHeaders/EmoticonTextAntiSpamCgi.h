//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "StoreEmotionBaseCgi.h"

@class NSString;

@interface EmoticonTextAntiSpamCgi : StoreEmotionBaseCgi
{
    _Bool m_shouldBlock;
    NSString *_text;
    id <EmoticonTextAntiSpamCgiDelegate> _delegate;
}

@property(nonatomic) __weak id <EmoticonTextAntiSpamCgiDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) _Bool shouldBlock; // @synthesize shouldBlock=m_shouldBlock;
- (void).cxx_destruct;
- (void)handleErrorReturn;
- (void)handleMessageReturnWithResponse:(id)arg1;
- (_Bool)startRequest;
- (id)init;

@end

