/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAGKPodView.h>

@class SALocation, SAUIAppPunchOut, NSNumber;

@interface SAGKMapPod : SAGKPodView

@property (nonatomic,retain) SALocation * location; 
@property (nonatomic,retain) SAUIAppPunchOut * punchOut; 
@property (nonatomic,copy) NSNumber * showButton; 
@property (nonatomic,copy) NSNumber * zoomLevel; 
+(id)mapPod;
+(id)mapPodWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SALocation *)location;
-(void)setLocation:(SALocation *)arg1 ;
-(void)setPunchOut:(SAUIAppPunchOut *)arg1 ;
-(SAUIAppPunchOut *)punchOut;
-(NSNumber *)zoomLevel;
-(void)setZoomLevel:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(NSNumber *)showButton;
-(void)setShowButton:(NSNumber *)arg1 ;
@end

