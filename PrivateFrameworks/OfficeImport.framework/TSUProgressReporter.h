/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSProgressReporting.h>

@class NSProgress, NSString;

@interface TSUProgressReporter : NSObject <NSProgressReporting> {

	NSProgress* _progress;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSProgress * progress; 
-(NSProgress *)progress;
-(id)initWithTotalUnitCount:(long long)arg1 ;
@end

