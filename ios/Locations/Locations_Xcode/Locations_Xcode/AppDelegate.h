//
//  AppDelegate.h
//  Locations_Xcode
//
//  Created by Lori Olson on 2017-02-22.
//  Copyright © 2017 The WNDX Group Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

