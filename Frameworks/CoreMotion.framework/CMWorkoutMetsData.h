/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSNumber, NSUUID;

@interface CMWorkoutMetsData : NSObject <NSSecureCoding, NSCopying> {

	NSDate* fStartDate;
	NSDate* fEndDate;
	NSNumber* fMets;
	NSUUID* fSourceId;
	NSUUID* fSessionId;

}

@property (nonatomic,readonly) NSNumber * mets; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) NSUUID * sessionId; 
@property (nonatomic,readonly) NSUUID * sourceId; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSUUID *)sessionId;
-(NSUUID *)sourceId;
-(NSNumber *)mets;
-(id)initWithSessionId:(id)arg1 sourceId:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 mets:(id)arg5 ;
-(id)initWithCLWorkoutMets:(const CLWorkoutMets*)arg1 ;
@end

