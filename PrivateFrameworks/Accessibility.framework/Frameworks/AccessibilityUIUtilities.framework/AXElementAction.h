/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AccessibilityUIUtilities/AccessibilityUIUtilities-Structs.h>
@class NSString, AXElement;

@interface AXElementAction : NSObject {

	NSString* _name;
	long long _type;
	AXElement* _element;
	NSString* _customActionIdentifier;
	id _dragActivationToken;
	unsigned long long _medusaGesture;
	CGPoint _dropPoint;

}

@property (nonatomic,retain) AXElement * element;                            //@synthesize element=_element - In the implementation block
@property (nonatomic,retain) NSString * customActionIdentifier;              //@synthesize customActionIdentifier=_customActionIdentifier - In the implementation block
@property (nonatomic,retain) id dragActivationToken;                         //@synthesize dragActivationToken=_dragActivationToken - In the implementation block
@property (assign,nonatomic) CGPoint dropPoint;                              //@synthesize dropPoint=_dropPoint - In the implementation block
@property (assign,nonatomic) unsigned long long medusaGesture;               //@synthesize medusaGesture=_medusaGesture - In the implementation block
@property (nonatomic,retain) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) long long type;                                 //@synthesize type=_type - In the implementation block
-(NSString *)name;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(AXElement *)element;
-(void)setName:(NSString *)arg1 ;
-(void)setElement:(AXElement *)arg1 ;
-(NSString *)customActionIdentifier;
-(void)setCustomActionIdentifier:(NSString *)arg1 ;
-(id)dragActivationToken;
-(void)setDragActivationToken:(id)arg1 ;
-(CGPoint)dropPoint;
-(void)setDropPoint:(CGPoint)arg1 ;
-(unsigned long long)medusaGesture;
-(void)setMedusaGesture:(unsigned long long)arg1 ;
@end

