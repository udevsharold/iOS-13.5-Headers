/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/INJSONSerializable.h>

@class NSDictionary, NSString;

@interface INParameterContexts : NSObject <INJSONSerializable> {

	NSDictionary* _suggestedValuesDictionary;
	NSDictionary* _typedSuggestedValuesDictionary;
	NSDictionary* _operatorsDictionary;

}

@property (setter=_setSuggestedValuesDictionary:,nonatomic,retain) NSDictionary * _suggestedValuesDictionary;                        //@synthesize suggestedValuesDictionary=_suggestedValuesDictionary - In the implementation block
@property (setter=_setTypedSuggestedValuesDictionary:,nonatomic,retain) NSDictionary * _typedSuggestedValuesDictionary;              //@synthesize typedSuggestedValuesDictionary=_typedSuggestedValuesDictionary - In the implementation block
@property (setter=_setOperatorsDictionary:,nonatomic,retain) NSDictionary * _operatorsDictionary;                                    //@synthesize operatorsDictionary=_operatorsDictionary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(BOOL)_isEmpty;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(NSDictionary *)_suggestedValuesDictionary;
-(NSDictionary *)_typedSuggestedValuesDictionary;
-(NSDictionary *)_operatorsDictionary;
-(id)_initWithIntent:(id)arg1 decoder:(id)arg2 JSONDictionary:(id)arg3 ;
-(void)_updateOperatorsForIntent:(id)arg1 JSONDictionary:(id)arg2 ;
-(void)_updateSuggestedValuesForIntent:(id)arg1 decoder:(id)arg2 JSONDictionary:(id)arg3 ;
-(void)_setSuggestedValuesDictionary:(id)arg1 ;
-(void)_setTypedSuggestedValuesDictionary:(id)arg1 ;
-(void)_setOperatorsDictionary:(id)arg1 ;
@end

