/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface WFRecordDescriptor : NSObject <NSCopying, NSSecureCoding> {

	Class _recordClass;

}

@property (nonatomic,readonly) Class recordClass;              //@synthesize recordClass=_recordClass - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)recordClass;
-(id)initWithRecordClass:(Class)arg1 ;
@end

