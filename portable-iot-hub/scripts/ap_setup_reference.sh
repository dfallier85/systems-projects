#!/bin/bash
# ap_setup_reference.sh
#
# Reference-only script for a Pi-style portable IoT hub setup.
# Adapt to your OS image and network manager.

set -e

echo "Installing common AP packages..."
sudo apt update
sudo apt install hostapd dnsmasq -y

echo "Stopping services before configuration..."
sudo systemctl stop hostapd || true
sudo systemctl stop dnsmasq || true

echo
echo "Typical next steps:"
echo "1. Assign static IP to wireless interface (example: 192.168.4.1/24)"
echo "2. Configure hostapd with SSID and WPA2 password"
echo "3. Configure dnsmasq with DHCP range"
echo "4. Enable and start hostapd + dnsmasq"
echo
echo "When ready:"
echo "  sudo systemctl enable hostapd"
echo "  sudo systemctl enable dnsmasq"
echo "  sudo systemctl start hostapd"
echo "  sudo systemctl start dnsmasq"
