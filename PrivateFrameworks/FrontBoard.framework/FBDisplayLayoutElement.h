/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol BSInvalidatable;
@class FBMainDisplayLayoutPublisher, NSString, FBSDisplayLayoutElement;

@interface FBDisplayLayoutElement : NSObject <BSDescriptionProviding> {

	FBMainDisplayLayoutPublisher* _publisher;
	Class _elementClass;
	NSString* _identifier;
	NSString* _key;
	FBSDisplayLayoutElement* _element;
	long long _displayType;
	id<BSInvalidatable> _activeAssertion;

}

@property (nonatomic,readonly) long long displayType;                          //@synthesize displayType=_displayType - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) FBSDisplayLayoutElement * element;              //@synthesize element=_element - In the implementation block
@property (nonatomic,readonly) Class elementClass;                             //@synthesize elementClass=_elementClass - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(FBSDisplayLayoutElement *)element;
-(NSString *)identifier;
-(long long)displayType;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)activate;
-(void)deactivate;
-(id)initWithDisplayType:(long long)arg1 identifier:(id)arg2 elementClass:(Class)arg3 ;
-(void)activateWithBuilder:(/*^block*/id)arg1 ;
-(void)updateWithBuilder:(/*^block*/id)arg1 ;
-(Class)elementClass;
@end

