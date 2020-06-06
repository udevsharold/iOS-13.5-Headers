/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AFTriggerlessListeningOptions;

@interface AFRequestCompletionOptions : NSObject <NSSecureCoding, NSCopying> {

	AFTriggerlessListeningOptions* _triggerlessListeningOptions;

}

@property (nonatomic,copy) AFTriggerlessListeningOptions * triggerlessListeningOptions;              //@synthesize triggerlessListeningOptions=_triggerlessListeningOptions - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithShowUIDuringListening:(BOOL)arg1 playAlertBeforeListening:(BOOL)arg2 ;
-(void)setTriggerlessListeningOptions:(AFTriggerlessListeningOptions *)arg1 ;
-(AFTriggerlessListeningOptions *)triggerlessListeningOptions;
@end

