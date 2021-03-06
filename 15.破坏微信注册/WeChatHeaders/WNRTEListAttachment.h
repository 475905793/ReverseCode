//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RTETextAttachment.h"

@class WNRTEAttachmentInfo;

@interface WNRTEListAttachment : RTETextAttachment
{
    WNRTEAttachmentInfo *_attachmentInfo;
    double _offsetY;
}

@property(nonatomic) double offsetY; // @synthesize offsetY=_offsetY;
@property(retain, nonatomic) WNRTEAttachmentInfo *attachmentInfo; // @synthesize attachmentInfo=_attachmentInfo;
- (void).cxx_destruct;
- (unsigned int)calculateListNumber:(id)arg1;
- (void)copyFromListAttachment:(id)arg1;
- (struct CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (double)getDefaultLineHeight;
- (id)initWithHTMLElement:(id)arg1 options:(id)arg2;

@end

