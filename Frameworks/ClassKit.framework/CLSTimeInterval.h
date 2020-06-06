/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassKit/CLSObject.h>
#import <libobjc.A.dylib/CLSRelationable.h>

@class NSDate, NSString;

@interface CLSTimeInterval : CLSObject <CLSRelationable> {

	NSDate* _startTime;
	double _length;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSDate * startTime;                    //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double length;                         //@synthesize length=_length - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)relations;
-(double)length;
-(NSString *)description;
-(void)setLength:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSDate *)startTime;
-(void)setStartTime:(NSDate *)arg1 ;
@end

