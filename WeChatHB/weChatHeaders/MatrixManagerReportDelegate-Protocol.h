//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol MatrixManagerReportDelegate <NSObject>
- (NSString *)onGetReportCryptKeyWithVersion:(unsigned int)arg1 withDataSize:(unsigned int)arg2;
- (NSString *)onGetMatrixReportCachePath;
- (NSString *)onGetMatrixReportURL;
- (NSString *)onGetMatrixReportHost;
- (NSString *)onGetMatrixReportUserName;
- (unsigned int)onGetMatrixReportProductID;
- (unsigned int)onGetMatrixReportUin;
- (unsigned int)onGetMatrixReportVersion;
@end
